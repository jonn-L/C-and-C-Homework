/*
CH-230-A
a2 p3.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Get the weeks, days and hours as input 
    int weeks, days, hours;
    scanf("%d", &weeks);
    scanf("%d", &days);
    scanf("%d", &hours);

    //Calculate and print out the total amount of hours
    int total = (weeks*168)+(days*24)+hours;
    printf("Total number of hours: %d\n", total);
    return 0;
}