/*
CH-230-A
a3 p10.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

float product(float a, float b){
    //Returns the product
    return a*b;
}

void productbyref(float a, float b, float *p){
    //Returns the product by refrence
    *p = a*b;
    return;
}

void modifybyref(float *a, float *b){
    //Modifies the values of and b through reference
    *a += 3;
    *b += 11;
    return;
}

int main(){
    //Declared the variables
    float a, b, p;

    //Get the input from the user
    scanf("%f", &a);
    scanf("%f", &b);

    //The result of product function
    printf("Product: %f\n", product(a, b));

    //The result of productbyref function
    //As we can see, the ressult is the same as the product function
    productbyref(a, b, &p);
    printf("ProductByRef: %f\n", p);

    //Values of a and b before modifybyref
    printf("a: %f\n", a);
    printf("b: %f\n", b);

    //Values of a and b after modifybyref
    modifybyref(&a, &b);
    printf("a: %f\n", a);
    printf("b: %f\n", b);

    return 0;
}