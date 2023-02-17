/*
CH-230-A
a7 p2.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

//Declare doubly linked list structure
struct node{
    char info;
    struct node *next;
    struct node *previous;
};

//Funtion to insert element at the beginning
struct node *insert_front(struct node *list, char ch){
    //Declare pointer and allocate it's memory
    struct node *newinfo;
    newinfo = (struct node*) malloc(sizeof(struct node));

    if (newinfo == NULL){
        printf ("Error allocating memory\n");
        return list;
    }

    //Assign value to newinfo
    newinfo -> info = ch;
    //Make newinfo's previous be NULL since it's the first element
    newinfo -> previous = NULL;
    //Make it's next be equal to the original first element of the list
    newinfo -> next = list;

    //Check if list is empty
    if (list != NULL){
        //If not, assign newinfo to previous of list
        list -> previous = newinfo;
    }

    return newinfo;
}

struct node *remove_char(struct node *list, char ch){
    //Declare pointer to the list's currnet element
    struct node *currnod = list;
    //Declare variable that checks whether the char is in the list or not
    int remove_counter = 0;

    //Loop until currnod is NULL
    while (currnod != NULL){
        //If currnod's value is not the char
       if (currnod -> info != ch){
            //Move on
            currnod = currnod -> next;
            continue;
       }

        //Add to the counter
        remove_counter ++;
        //Case if character is the first element
        if (currnod == list){
            list = currnod -> next;
        }
        //Cut the connection with the previous element
        if (currnod -> previous != NULL){
            currnod -> previous -> next = currnod -> next;
        }
        //Cut the connection with the next element
        if (currnod -> next != NULL){
            currnod -> next -> previous = currnod -> previous;
        }
        //Declare temporary pointer so that we can free currnode
        struct node *nextinfo = currnod -> next;
        free(currnod);
        //Now that we freed the currnod, we assign to it a new value
        currnod = nextinfo;
    }
    //Check whether the character was in the list
    if (remove_counter == 0){
        printf("The element is not in the list!\n");
    }
    return list;
}

//Print the list; same as a normal linked list
void print_list(struct node *list){
    struct node *curr = list;

    while (curr != NULL){
        printf("%c ", curr -> info);
        curr = curr -> next;
    }
    printf("\n");
}

//Print the list in reverse
void print_list_backwards(struct node *list){
    //Declare curr pointer that points to the first element of the lsit
    struct node *curr = list;

    //Go the the last element
    while(curr -> next != NULL){
        curr = curr -> next;
    }

    //Print the elements by going to the previous element
    while (curr != NULL){
       printf("%c ", curr -> info);
       curr = curr -> previous;
    }
    printf("\n");
}

//Free the memory; same as a linked list
void free_list(struct node *list){
    struct node *curr;
    while (list != NULL){
        curr = list -> next;
        free(list);
        list = curr;
    }
}

int main(){
    //Declare list, number input for the switch, and character needed for
    //the various actions
    struct node *list = NULL;
    int numin;
    char charin; 

    while (1){
        //Ask for number to determine which action to take
        scanf("%d", &numin);
        switch (numin){
            case 1:
                //Get charin from user and execute function
                scanf(" %c", &charin);
                list = insert_front(list, charin);
                break;
            case 2:
                //Get charin from user and execute function
                scanf(" %c", &charin);
                list = remove_char(list, charin);
                break;
            case 3:
                //Execute function
                print_list(list);
                break;
            case 4:
                //Execute function
                print_list_backwards(list);
                break;
            case 5:
                //Execute function
                free_list(list);
                return 0;
        }
    }
    return 0;
}