/*
CH-230-A
a7 p4.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//Function that turns string into uppercase
void upperstr(char str[256]){
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}

//Function that turns string into lowercase
void lowerstr(char str[256]){
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", tolower(str[i]));
    }
    printf("\n");
}

//Function that turns lowercase into uppercase and vice versa
void lowupstr(char str[256]){
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", islower(str[i]) ? toupper(str[i]) : tolower(str[i]));
    }
    printf("\n");
}

//Funtion that quits execution
void quitexe(char str[256]){
    exit(0);
}

//Array of funtion pointers used to call the fucntions 
void (*func_arr[4])(char str[256]) = {upperstr, lowerstr, lowupstr, quitexe};

int main(){
    //Declare string
    char string[256];

    //Get string from user and delete \n at the end of it
    fgets(string, 256, stdin);
    string[strcspn(string, "\n")] = 0;

    //Infinte loop
    while (1){
        //Declare input variable and get it's value from user
        int input;
        scanf("%d", &input);

        //Call array of function pointers based on the user's input
        func_arr[input - 1](string);
    }
    return 0;
}