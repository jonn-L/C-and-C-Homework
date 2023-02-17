/*
CH-230-A
a5 p4.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

void divby5(float arr[], int size){
    //Divide the elements
    for (int n = 0; n < size; n++){
        arr[n] = arr[n]/5.0;
    }
}

int main(){
    //Declare needed variables
    float *arr;
    int size;

    //Get number of elements and allocate memory
    scanf("%d", &size);
    arr = (float*) malloc(sizeof(float) * size);

    //Ask for the values
    for (int n = 0; n < size; n++){
        scanf("%f", &arr[n]);
    }

    //Print the array before division by 5
    printf("Before:\n");
    for (int n = 0; n < size; n++){
        printf("%.3f ", arr[n]);
    }

    //Divide by 5
    divby5(arr, size);

    //Print the array after division by 5
    printf("\nAfter:\n");
    for (int n = 0; n < size; n++){
        printf("%.3f ", arr[n]);
    }
    printf("\n");

    free(arr);
    return 0;
}