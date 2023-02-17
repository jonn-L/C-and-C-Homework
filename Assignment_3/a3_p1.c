/*
CH-230-A
a3 p1.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    int n, i;
    float x;
    scanf("%f", &x);
    scanf("%d", &n);
    while (n<1){
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    for (i=0; i < n; i++){
        printf("%f\n", x);
    }
}