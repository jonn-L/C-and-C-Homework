/*
CH-230-A
a2 p6.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Get the values
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    //Assign them the pointers
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    //Print the addresses contained in the pointers
    printf("This is the address contained in ptr_one: %p\n", ptr_one);
    printf("This is the address contained in ptr_two: %p\n", ptr_two);
    printf("This is the address contained in ptr_three: %p\n", ptr_three);
    return 0;
}