/*
CH-230-A
a3 p6.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

//Declare the to_pounds function
float to_pounds (int kg, int g){
        //Convert g to kg
        float grams_as_kilos = (float) g  / 1000;
        //Convert it all to pounds
        return (kg+grams_as_kilos)*2.2;
    }

int main(){
    //Declare the needed variables
    int kg, g;

    //Ask the user for the kg and g
    scanf("%d", &kg);
    scanf("%d", &g);

    //Print of the number of pounds
    printf("Result of conversion: %lf\n", to_pounds (kg, g));
    return 0;
}