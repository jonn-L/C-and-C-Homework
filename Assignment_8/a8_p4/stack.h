/*
CH-230-A
a8 p4.c
Jon Lumi
jlumi@jacobs-university.de
*/
#ifndef STACK_HEADER
#define STACK_HEADER

//Declare stack structure
struct stack{
    unsigned int count;
    int array[12];
};

//Functiont that add element to top
int push(struct stack *mystack, int num);
//Function that pops top element
int pop(struct stack *mystack);
//Function that empties list
void empty(struct stack *mystack);
//Function to check if stack is empty or not
int isEmpty(struct stack *mystack);
//Function that prints the binary number using the stack
void printbinary(struct stack *mystack);

#endif
