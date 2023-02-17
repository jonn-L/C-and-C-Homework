/*
CH-230-A
a4 p1.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

int main(){
    //Declare the variables
    float low_limit, up_limit, increment;
    float x;

    //Get the values from the user
    scanf("%f", &low_limit);
    scanf("%f", &up_limit);
    scanf("%f", &increment);

    //Loop with float increment and calculate
    for (x = low_limit; x <= up_limit; x += increment) {
        printf("%f %f %f\n", x, x*x*M_PI, 2*M_PI*x);
    }
    return 0;
}