/*
CH-230-A
a2 p5.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Get the input
    int a;
    scanf("%d", &a);
    printf("This is the value: %d\n", a);
    
    //Assign the pointer and print its address
    int *ptr_a;
    ptr_a = &a;
    printf("This is the address contained in the pointer: %p\n", ptr_a);

    //Change the value of the variable and print the addresses
    *ptr_a += 5;
    printf("This is the modifed value of the variable: %d\n", a);
    printf("This is the address of the variable: %p\n", ptr_a);
    return 0;
}