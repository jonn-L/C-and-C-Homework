/*
CH-230-A
a8 p4.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include"stack.h"

int main(){
    //Declare stack
    struct stack mystack;
    mystack.count = 0;

    //Delclare the unsigned int
    unsigned int decimal;

    //Get the decimal number we want to convert
    scanf("%d", &decimal);

    //Print the message
    printf("The binary representation of %d is ", decimal);
    //Loop that finds the binary representation of the given decimal number
    while (decimal != 0){
        int bin = decimal % 2;
        //Store in the stack using the push function
        push(&mystack, bin);
        decimal = decimal / 2;
    }
    //Print the binary number using the function
    printbinary(&mystack);
    return 0;
}