/*
CH-230-A
a7 p7.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include"stack.h"

int main(){
    //Declare stack
    struct stack mystack;
    mystack.count = 0;
    int num;

    while (1){
        //Declare ch and ask user for action
        char ch;
        scanf(" %c", &ch);

        switch (ch){
            case 's':
                //Ask user what value to add to top
                scanf("%d", &num);
                //Check if it's full
                if (mystack.count == 12){
                    //If so, print message
                    printf("Pushing Stack Overflow\n");
                }
                else{
                    //Otherwise, print other message and call function
                    printf("Pushing %d\n", push(&mystack, num));
                }
                break;
            case 'p':
                //Check if it's empty
                if (mystack.count == 0){
                    //If so, print message
                    printf("Popping Stack Underflow\n");
                }
                else{
                    //Otherwise, print other message and call function
                    printf("Popping %d\n", pop(&mystack));
                }
                break;
            case 'e':
                //Call function that empties stack
                empty(&mystack);
                break;
            case 'q':
                //Print quit and close program
                printf("Quit\n");
                return 0;
        }
    }
    return 0;
}