/*
CH-230-A
a6 p2.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#define LEASTBIT(a, b) (b = a & 1)    

int main(){
    //Declare char and bit
    unsigned char ch;
    int bit;

    //Get ch from user
    scanf("%c", &ch);
    //Print decimal representation
    printf("The decimal representation is: %d\n", ch);

    //Use macro to find least significant bit
    LEASTBIT(ch, bit);
    //Print least significant bit
    printf("The least significant bit is: %d\n", bit);
    return 0;
}