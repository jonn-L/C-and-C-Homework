#include<stdio.h>
#include"stack.h"

//Functiont that add element to top
int push(struct stack *mystack, int num){
    //Assign the value to the last element of the array
    mystack -> array[mystack -> count] = num;
    //Increase the count in mystack
    mystack -> count = mystack -> count + 1;

    return num;
}

//Function that pops top element
int pop(struct stack *mystack){
    //Declare variable that saves top value to return it
    int temp = mystack -> array[mystack -> count - 1];

    //Assign zero to the top and lower counter
    mystack -> array[mystack -> count - 1] = 0;
    mystack -> count = mystack -> count - 1;

    return temp;
}

//Function that empties list
void empty(struct stack *mystack){
    int size = mystack -> count - 1;
    printf("Emptying Stack ");
    //Loop that starts from the top and goes to the bottom of the stack
    for (int i = size; i >= 0; i--){
        printf("%d ", mystack -> array[i]);
        mystack -> array[i] = 0;
        mystack -> count = mystack -> count - 1;
    }
    printf("\n");
}

//Function to check if stack is empty or not
int isEmpty(struct stack *mystack){
    if (mystack -> count == 0){
        //If it's empty, return 0
        return 0;
    }
    //Otherwise, return 1
    return 1;
}