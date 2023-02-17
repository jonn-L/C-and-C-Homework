/*
CH-230-A
a3 p3.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
//Declared the function for convertion with a parameter "cm"
float convert(float cm);

int main (){
    float cm, km;
    //Takes the inputed "cm"
    scanf("%f", &cm);
    
    km = convert(cm);
    printf("Result of conversion: %f\n", km);
    return 0;
}
float convert(float cm){
    //Returns the result which is the input divided by 100000
    float result;
    result = cm/100000;
    return result;
}