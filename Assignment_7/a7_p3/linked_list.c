#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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