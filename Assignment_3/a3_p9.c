/*
CH-230-A
a3 p9.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

//Declare the sum25 function
double sum25(double v[], int n){
    //If else statement to see if there are enough elements
    if (n >= 6){
        return v[2] + v[5];
    }
    else {
        return -111;
    }
}

int main(){
    //Declaring the variables
    int n, counter;
    double v[20];
    
    //Get the number of doubles
    scanf("%d", &n);

    //Get the doubles and add them to the array
    for (counter = 0; counter < n; counter++){
        scanf("%lf", &v[counter]);
    }

    //Print out the result
    double result = sum25(v, n);
    if (result == -111) {
        printf("One or both positions are invalid\n");
    } else {
        printf("sum=%lf\n", result);
    }
    return 0;
}