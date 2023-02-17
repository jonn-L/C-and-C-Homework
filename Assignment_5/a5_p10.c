/*
CH-230-A
a5 p10.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

void countdown(int n){
    //Check if n is negative or not
    if (n > 0){
        //Print n
        printf("%d\n", n);
        //Function calls itself for n - 1
        return countdown(n - 1);
    }
}

int main(){
    //Declare n
    int n;
    
    //Get value of n from user
    scanf("%d", &n);

    //Call function
    countdown(n);

    return 0;
}