/*
CH-230-A
a8 p8.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declare needed variables
    FILE *fp;
    char ch;
    int word_count = 0;
    int gap_encountered = 0;

    //Open file and then check if fp is NULL
    fp = fopen("words.txt", "r");
    if (fp == NULL){
        printf("Some error ocurred!\n");
        exit(1);
    }
    
    //Iterate through the characters in the fil until the end of file
    while((ch = getc(fp)) != EOF){
        //Check if ch is one of the characters that seperate words
        if (ch == ' ' || ch == ',' || ch == '?' || ch == '!' || ch == '.' ||
            ch == '\t' || ch == '\r' ||ch == '\n' || ch == EOF){
            //If so, check if gap is false (0)
            //gap is true if we have previously encountered one of the word
            //seperator characters
            if (gap_encountered == 0){
                //If so, turn gap_encountered to true and raise word count
                gap_encountered = 1;
                word_count++;
            }
        }
        //If ch is not one of them, then turn gap_encountered into false
        else{
            gap_encountered = 0;
        }
    }
    //Print the number of words that the file contains.
    printf("The file contains %d words.\n", word_count);
    
    return 0;
}