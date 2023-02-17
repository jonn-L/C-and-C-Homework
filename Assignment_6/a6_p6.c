/*
CH-230-A
a6 p6.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

int main(){
    //Declare usigned character
    unsigned char ch;

    //Get character from user
    scanf("%c", &ch);

    //Print the decimal representation
    printf("The decimal representation is: %d\n", ch);

    //Print the binary representation
    printf("The binary representation is: ");
    //Here i = 7 because that's how many bits we're going to have to shift 
    //in the beginning
    for (int i = 7; i >= 0; i--){
        //Variable bit is the bit we're going to print
        //We shift ch by the value of i which goes down as we iterate
        int bit = (ch >> i) & 1;
        printf("%d", bit);                                                                             
    }  
    printf("\n");
    return 0;
}