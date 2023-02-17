/*
CH-230-A
a3 p5.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>
int main(){
    //We declare the variables we're going to need
    char c;
    int n, counter;
    double temps[100], sum = 0, average = 0;

    //We get the function and the number of doubles from the user
    scanf("%c", &c);
    getchar();
    scanf("%d", &n);

    //This is the loop that asks for the temps
    for (counter = 0; counter < n; counter++){
        scanf("%lf", &temps[counter]);
    }

    //The switch for all the possible cases of c
    switch (c) 
    {
        case 's':
        //Calculates the sum of all temps
        for (counter = 0; counter < n; counter++){
            sum += temps[counter];
            }
        printf("This is the sum of all the entered temperatures: %lf\n", sum);
        break;

        case 'p':
        //Lists all the temps
        for (counter = 0; counter < n; counter++){
            printf("This is the list of all the entered temperatures:\n");
            printf("%lf\n", temps[counter]);
        }
        break;

        case 't':
        //Converts temps to Fahrenheit
        for (counter = 0; counter < n; counter++){
            temps[counter] = ((temps[counter]*9)/5)+32;
            printf("This is all the temperatures coverteted to Fahrenheit:\n");
            printf("%lf\n", temps[counter]);
        }
        break;

        default:
        //Finds the average of all the temps
        for (counter = 0; counter < n; counter++){
            sum += temps[counter];
            }
            average = sum/n;
            printf("This is the average of all the temperatures: %lf\n", average);
        break;
    }
    return 0;
}