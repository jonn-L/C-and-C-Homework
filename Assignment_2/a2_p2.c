/*
CH-230-A
a2 p2.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Get character from user
    char ch;
    scanf("%c", &ch);
    getchar();

    //Print the character, it's decimal form, it's octal form, and it's hexadecimal form
    printf("character=%c\n", ch);
    printf("decimal=%d\n", ch);
    printf("octal=%o\n", ch);
    printf("hexadecimal=%x\n", ch);
    return 0;
}