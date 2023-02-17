/*
CH-230-A
a5 p2.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

void divby5(float arr[], int size){
    //Divide the elements
    for (int n = 0; n < size; n++){
        arr[n] = arr[n]/5.0;
    }
}

int main(){
    //Declare needed variables
    float arr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = 6;

    //Print the elements before division
    printf("Before:\n");
    for (int n = 0; n < size; n++){
        printf("%.3f ", arr[n]);
    }

    //Call function that divides the elements by 5
    divby5(arr, size);

    //Print the elements after the division
    printf("\nAfter:\n");
    for (int n = 0; n < size; n++){
        printf("%.3f ", arr[n]);
    }
    printf("\n");
    
    return 0;
}