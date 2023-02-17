/*
CH-230-A
a5 p6.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

int main(){
    //Declare needed variables
    int n, i = 0;
    //Declare pointer
    float* ptr; 

    //Get number of elements from user
    scanf("%d", &n);
    
    //Declare array
    float arr[n];
    //Get the values for the array from user
    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }

    /*
    Loop through elements until negative value
    using only pointer arithmetics
    */
    for(ptr = arr; *ptr > 0; ptr++, i++){
        //do nothing
    }
    //Print the number of negative elements
    printf("Before the first negative value: %d elements\n", i);
    return 0;
}