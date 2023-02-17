/*
CH-230-A
a3 p8.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

//Declare the function that finds the sum
float find_sum(float array_of_numbers[10], int size_of_array){
    int counter, sum = 0;
    //Loop to calculate the sum
    for (counter = 0; counter < size_of_array; counter++){
            sum += array_of_numbers[counter];
            }
    return sum;
}

//Declare the function that finds the average
float find_average(float array_of_numbers[10], int size_of_array){
    //Calculates the average
    return find_sum(array_of_numbers, size_of_array) / size_of_array;
}

int main(){
    //Decalare the variables
    int size_of_array = 0, counter;
    float array_of_numbers [10];

    //Loop to add numbers to the array
    for (counter = 0; counter < 10; counter++, size_of_array++){
        scanf("%f", &array_of_numbers[counter]);
        //Stops if the input is -99.0
        if (array_of_numbers[counter] == -99.0) {
            break;
        }
    }

    //Prints the results
    printf("sum=%f\n", find_sum(array_of_numbers, size_of_array));
    printf("average=%f\n", find_average(array_of_numbers, size_of_array));
}