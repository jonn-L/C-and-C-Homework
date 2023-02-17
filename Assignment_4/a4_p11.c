/*
CH-230-A
a4 p11.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int count_insensitive(char *str, char c){
    //Declare variable that counts occurrences
    int ch_occur = 0;
    //Loop that finds the occurrences
    for (int i = 0; str[i] != '\0'; i++){
        if (tolower(str[i]) == tolower(c)){
            ch_occur++;
        } 
    }
    return ch_occur;
}

int main(){
    //Declare the array of characters and the str1
    char characters[5] = {'b', 'H', '8', 'u', '$'};
    char *str1;
    //Allocate the memory for str1
    str1 = ((char*) malloc(sizeof(char) * 50));

    //Get the string from user
    fgets(str1, 50, stdin);
    str1[strcspn(str1, "\n")] = 0;

    //Declare str2 and find the length of str1
    char *str2;
    int str1_size = strlen(str1);

    //Allocate the needed memory to str2 and copy str1 to str2
    str2 = (char*) malloc(sizeof(char) * str1_size);
    strcpy(str2, str1);

    //Loop that goes through all the characters of the array
    for (int i = 0; i < 5; i++){
        char ch = characters[i];
        printf("The character '%c' occurs %d times.\n", ch, count_insensitive(str2, ch));
    }

    //Free the memory for str1 and str2
    free(str1);
    free(str2);
    return 0;
}