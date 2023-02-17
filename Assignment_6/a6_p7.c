/*
CH-230-A
a6 p7.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

void set3bits (unsigned char a, int x, int y, int z){
    printf("After setting the bits: ");
    for (int i = 7; i >= 0; i--){
        int bit = (a >> i) & 1;
        //Check when when we reach the bits that we want to set to 1
        if ((i == x) || (i == y) || (i == z)){
            //Set value of bit to 1 if so
            bit = 1;
        }
        printf("%d", bit);                                                                             
    }  
    printf("\n");
}

int main(){
    //Declare the char and the bits we want to set to 1
    unsigned char ch;
    int set1, set2, set3;

    //Get input from user
    scanf("%c", &ch);
    getchar();
    scanf("%d", &set1);
    scanf("%d", &set2);
    scanf("%d", &set3);

    //Print the decimal representation
    printf("The decimal representation is: %d\n", ch);
    
    //Print the binary representation using the code from a6_p6
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--){
        int bit = (ch >> i) & 1;
        printf("%d", bit);                                                                             
    }  
    printf("\n");

    //Call the set3bits function
    set3bits(ch, set1, set2, set3);

    return 0;
}
