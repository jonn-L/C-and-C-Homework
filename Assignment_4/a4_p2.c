/*
CH-230-A
a4 p2.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>

int main(){
    //Declare the string
    char string[50];

    //Get the string from user and remove newlines
    fgets(string, 50, stdin);
    string[strcspn(string, "\n")] = 0;

    //Loop that goes through all the characters in string
    for (int counter = 0; string[counter] != '\0'; counter++){
        //Print out the character according to it's position
        if (counter % 2 == 0){
            printf("%c\n", string[counter]);
        } else{
            printf(" %c\n", string[counter]);
        }
    }
}