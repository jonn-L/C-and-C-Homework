/*
CH-230-A
a2 p4.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Get the float numbers from the input
    float a, b, h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    //Declare the variables for the areas and calculate them
    float square_area, rectangle_area, triangle_area, trapezoid_area;
    printf("square area=%f\n", square_area = a*a);
    printf("rectangle area=%f\n", rectangle_area = a*b);
    printf("triangle area=%f\n", triangle_area = (a*h)/2);
    printf("trapezoid area=%f\n", trapezoid_area = (a+b)*h/2);
    return 0;
}