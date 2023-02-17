/*
CH-230-A
a5 p7.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    //Declare the strings
    char str1[100];
    char str2[100];
    char *con;

    //Get string one
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    //Get string two
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    //Allocate the memory for con
    int size = strlen(str1) + strlen(str2);
    con = (char*) malloc(sizeof(char) * size);

    //Copy str1 to con
    strcpy(con, str1);
    //Concatenate con and str2
    strcat(con, str2); 
    con[strcspn(con, "\n")] = 0;

    //Print the con string
    printf("Result of concatenation: %s\n", con);

    //Free the allocated memory
    free(con);
    return 0;
}