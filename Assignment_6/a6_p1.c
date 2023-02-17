/*
CH-230-A
a6 p1.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

//Define the macro
#define SWAP(t, x, y) {t temp = x; x = y; y = temp;}

int main(){
    //Declare variables
    int i1, i2;
    double d1, d2;

    //Get numbers from user
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%lf", &d1);
    scanf("%lf", &d2);

    //Use the defined macro
    SWAP(int, i1, i2);
    SWAP(double, d1, d2);

    //Print the results
    printf("After swapping:\n");
    printf("%d\n%d\n", i1, i2);
    printf("%.6lf\n%.6lf\n", d1, d2);

    return 0;
}