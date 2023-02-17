/*
CH-230-A
a6 p5.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

int main(){
    //Declare the unsigned charcter
    unsigned char ch;

    //Get character from user
    scanf("%c", &ch);

    //Print the decimal representation
    printf("The decimal representation is: %d\n", ch);

    //Declare the counter of leading zeros
    int leadzeros = 0;
    //Loop from 128 until 1 by deviding i by 2
    //In binary, this means we go from 10000000 to 1
    for (int i = 128; i >= 1; i/=2){
        //We compare to binary i
        if ((ch & i) == 0){
            //If the comaprison is 0, we add 1 to the counter
            leadzeros ++;
        }
        else{
            break;
        }
    }

    //Print the babackwards binary representation
    printf("The backwards binary representation is: ");
    //Start from i = leadzeros to ingnore the leading zeros
    for (int i = leadzeros; i < 8; i++){
        int bit = ch & 1;
        printf("%d", bit);    
        ch >>= 1;                                                                         
    } 
    printf("\n");
    return 0;
}