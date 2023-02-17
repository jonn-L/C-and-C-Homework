/*
CH-230-A
a2 p8.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Get the number
    int nr;
    scanf("%d", &nr);

    //Check whether it's divisible by 2 and 7 through a if and else statement
    if (nr%2==0 && nr%7==0){
        printf("The number is divisible by 2 and 7\n");
    }
    else {
    printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}