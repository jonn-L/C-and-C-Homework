/*
CH-230-A
a4 p6.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

void two_largest(int arr[], int num){
    //Declare the needed values
    int num_one = arr[0];
    int num_two = arr[1];

    //Determine which of the first two values is largest
    if (num_one > num_two){
        //do nothing
    }
    else{
        num_one = arr[1];
        num_two = arr[0];
    }

    //Loop through all the elements
    for (int n = 0; n < num; n++){
        /*Compare the current value in the loop with 
        the current largest*/
        if (arr[n] > num_one){
            num_two = num_one;
            num_one = arr[n];
        }
        /*Compare the current value in the loop with 
        the current second largest*/
        else if ((arr[n] > num_two)){
            num_two = arr[n];
        }
    }

    //Print out the values
    printf("The largest number is: %d", num_one);
    printf("The second largest number is: %d", num_two);
}

int main(){
    //Declare n and the array
    int n = 0;
    int* memo_nums;

    //Ask for the number of elements in the array
    scanf("%d", &n);
    //Allocate the memory
    memo_nums = (int*) malloc(sizeof(int) * n);

    //Ask for the values
    for (int i = 0; i < n; i++){
        scanf("%d", &memo_nums[i]);
    }

    //Execute the function
    two_largest(memo_nums, n);

    //Free the allocated memory
    free(memo_nums);
    return 0;
}