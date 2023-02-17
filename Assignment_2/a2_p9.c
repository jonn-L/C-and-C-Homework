/*
CH-230-A
a2 p9.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Declare the variables needed and get the input from the user
    char a;
    int ascii;
    scanf("%c", &a);
    getchar();
    ascii = (int) a;

    //Determine whether the input is a character, digit, or a symbol through the ASCII value
    if ((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        printf("%c is a letter\n", a);
    }
    else if ((ascii>=48 && ascii<=57)){
        printf("%c is a digit\n", a);
    }
    else {
        printf("%c is some other symbol\n", a);
    }
    return 0;
}