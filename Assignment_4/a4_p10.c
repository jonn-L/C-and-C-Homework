/*
CH-230-A
a4 p10.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
    //Do the various calculations 
    *prod = a * b;
    *div = a/b;
    *pwr = pow(a, b);
    *invb = 1/b;
}

int main(){
    //Declare the needed variables
    float a, b;
    float prod, div, pwr, invb;

    //Get a and b from user
    scanf("%f", &a);
    scanf("%f", &b);

    //Execute function and print results
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("Product: %f\nDivison: %f\nPower: %f\nInvb: %f", prod, div, pwr, invb);

    return 0;
    
}