/*
CH-230-A
a4 p12.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

void replaceAll(char *str, char c, char e){
    //Loop that replaces the character
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == c){
            str[i] = e;
        }
    }
}

int main(){
    //Declare the string and the characters
    char str[80];
    char c, e;

    while(1){
        //Get string from user
        fgets(str, 80, stdin);
        str[strcspn(str, "\n")] = 0;

        //Check and stop if string is stop
        if (strcmp(str, "stop") == 0){
            break;
        }

        //Get c and e from user
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);
        getchar();

        //Print the string, c, and e before replacement
        printf("The string before replacement:\n%s\n", str);
        printf("The character to be replaced:\n%c\n", c);
        printf("The character to be replaced with:\n%c\n", e);

        //Execute function that replaces the character
        replaceAll(str, c, e);

        //Print the string, c, and e after replacement
        printf("The string after replacement:\n%s\n", str);
        printf("The character that was replaced:\n%c\n", c);
        printf("The character it was replaced with:\n%c\n", e);
    }
    return 0;
}