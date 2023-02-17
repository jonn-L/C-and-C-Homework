/*
CH-230-A
a4 p3.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>

float geometric_mean(float arr[], int num){
    //Declare the local variables
    float power = 1.0/num;
    float geo_mean = pow(arr[0], power);

    //Loop that calculates the gemoetric mean
    for (int n = 1; n < num; n++){
        /*
        Keeps multiplying with the numbers[n]
        to the power of 1/num where n is the
        number of numbers in the array
        */
        geo_mean = geo_mean*pow(arr[n], power);
    }
    return geo_mean;
}

float highest_number(float arr[], int num){
    //Declare the first element as the highest
    float high_num = arr[0];

    for (int n = 1; n < num; n++){
        //Compare until we find the highest number
        if (arr[n] > high_num){
            high_num = arr[n];
        }
    }
    return high_num;
}

float lowest_number(float arr[], int num){
    //Declare the first element as the lowest number
    float low_num = arr[0];

    for (int n = 1; n < num; n++){
        //Compare until we find the lowest number
        if (arr[n] < low_num){
            low_num = arr[n];
        }
    }
    return low_num;
}

float total_sum(float arr[], int num){
    //Declare the first element as the sum
    float sum = arr[0];

    for (int n = 1; n < num; n++){
        //Keeping adding all the elements
        sum += arr[n];
    }
    return sum;
}

int main(){
    //Declare the needed variables
    float numbers[15];
    char ch;
    int size_of_array;

//Loop that asks for input until a negative number
for (int n = 0; n < 10; n++, size_of_array++){
        scanf("%f", &numbers[n]);

        if (numbers[n] < 0) {
            break;
        }
    }

    //Ask which operation to do
    getchar();
    scanf("%c", &ch);

    //Execute the wanted operation
    switch (ch){
        case 'm':
            printf("%f\n", geometric_mean(numbers, size_of_array));
            break;

        case 'h':
            printf("%f\n", highest_number(numbers, size_of_array));
            break;

        case 'l':
            printf("%f\n", lowest_number(numbers, size_of_array));
            break;

        case 's':
            printf("%f\n",total_sum(numbers, size_of_array));
            break;
    }
    return 0;
}