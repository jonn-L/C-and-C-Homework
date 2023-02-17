/*
CH-230-A
a6 p9.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

//Declare the structure
struct link_list{
    int elem;
    struct link_list *next;
};

//Funtion that prints the list
void print_list(struct link_list *list){
    struct link_list *curr = list;
    while(curr != NULL){
        printf("%d ", curr -> elem);
        curr = curr -> next;
    }
    printf("\n");
}

//Funtion that inserts the value to the front of the list
struct link_list* insert_front(struct link_list *list, int value){
    struct link_list *newelem;
    newelem = (struct link_list*) malloc(sizeof(struct link_list));

    if (newelem == NULL){
        printf ("Error allocating memory\n");
        return list;
    }
    
    newelem -> elem = value;
    newelem -> next = list;
    return newelem;
}

//Funtion that inserts the value to the back of the list
struct link_list* insert_end(struct link_list *list, int value){
    struct link_list *curr, *newelem;
    curr = list;
    newelem = (struct link_list*) malloc(sizeof(struct link_list));
    if (newelem == NULL){
        printf ("Error allocating memory\n");
        return list;
    }
    newelem -> elem = value;
    newelem -> next = NULL;
    if (list == NULL){
        return newelem;
    }
    while (curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = newelem;
    return list;
}

//Function that deallocates the memory for the list
void free_list(struct link_list *list){
    struct link_list *nextelem;
    while (list != NULL){
        nextelem = list -> next;
        free(list);
        list = nextelem;
    }
}

//Function that removes the first element from the list
struct link_list* remove_front(struct link_list *list){
    //Check whether the list any elements 
    if (list == NULL){
        return list;
    }
    struct link_list *newlist = list -> next;
    free(list);
    return newlist;
}

//Function that inserts the desired value at the desired position
struct link_list* insert_value(struct link_list *list, int pos, int val){
    //Declare needed variables
    struct link_list *curr = list;
    int i = 0;

    //Loop until curr is equal to NULL
    while (curr != NULL){
        i++;
        //When we find the position
        if (i == pos){
            //Declare new element and allocate memory for it
            struct link_list *newelem; 
            newelem = (struct link_list*) malloc(sizeof(struct link_list));
            if (newelem == NULL){
                printf ("Error allocating memory\n");
                return list;
            }
            //Delclare temp
            struct link_list *temp = curr -> next;
            //Assign the value to newelem
            newelem -> elem = val;
            newelem -> next = temp;

            //Add newelem to curr
            curr -> next = newelem;
            return list;
        }
        curr = curr -> next;
    }
    //Check if the position is invalid
    if (i < pos){
        printf("Invalid position!\n");
        return list;
    }
    return list;
}

struct link_list *reverse_list(struct link_list *list){
    //Declare the needed variables
    struct link_list *curr = list;
    struct link_list *prev = NULL;
    struct link_list *next = NULL;

    //Loop until curr is NULL
    while (curr != NULL){
        //Assign next to the pointer  
        next = curr -> next;

        //Reverse the pointer of curr
        curr -> next = prev;

        //Move the pointer to the next
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    //Declare the list and other needed variables
    struct link_list *list = NULL;
    char ch;
    int end_value, front_value;
    int val, pos;

    //While loop that asks for input until the input is q
    while (1){
        //Ask for input
        scanf(" %c", &ch);
        switch (ch){
            case 'a':
                //Ask for the value and then insert it
                scanf("%d", &end_value);
                list = insert_end(list, end_value);
                break;
            case 'b':
                //Ask for the value and then insert it
                scanf("%d", &front_value);
                list = insert_front(list, front_value);
                break;
            case 'r':
                //Remove the first element
                list = remove_front(list);
                break;
            case 'p':
                //Print the list
                print_list(list);
                break;
            case 'q':
                //Free the memory and end program
                free_list(list);
                return 0;
            case 'i':
                //Ask for position and value
                scanf("%d", &pos);
                scanf("%d", &val);
                list = insert_value(list, pos, val);
                break;
            case 'R':
                //Reverse list
                list = reverse_list(list);
                break;
        }
    }
    return 0;
}