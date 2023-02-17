/*
CH-230-A
a4 p9.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

int prodminmax(int arr[], int n){
    //Declare the needed variables
    int largest = arr[0], smallest = arr[0];

    //Loop that finds the largests
    for (int i = 0; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }

    //Loop that finds the smallest
    for (int i = 0; i < n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }

    //Return the result
    return largest * smallest;
}

int main(){
    //Declare the n and the array
    int n;
    int *arr;

    //Get the number of elements for the array
    scanf("%d", &n);
    //Alocate the memory
    arr = (int*) malloc(sizeof(int) * n);

    //Ask for the values
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Print the result
    printf("%d", prodminmax(arr, n));

    //Free the allocated memory
    free(arr);
}