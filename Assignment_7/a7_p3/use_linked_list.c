/*
CH-230-A
a7 p3.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
    //Declare the list and other needed variables
    struct link_list *list = NULL;
    char ch;
    int end_value, front_value;

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
        }
    }
    return 0;
}