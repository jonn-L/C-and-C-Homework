/*
CH-230-A
a4 p5.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>

int count_consonants(char str[]){
    //Declare array with all the vowels
    char vowels[10] = {'a',
    'e',
    'i',
    'o',
    'u',
    'A',
    'E',
    'I',
    'O',
    'U'};
    //Variables needed
    int num_consonants = 0, j = 1;

    //Loop that goes through the string using a pointer
    for (char *ptr = str; (*ptr) != '\0'; ptr++){
        char c = *ptr;
        //Loop that goes through all the vowels
        for (int n = 0; n < 10; n++){
            //Check if character is a vowel
            if (c == vowels[n]){
                num_consonants--;
            }
        }

        //Confrim whether character is a letter through the pointer
        if (c != ' '){
            if (((int) c >= 97) && ((int) c <= 122)){
                num_consonants++;
            }
            else if(((int) c >= 60) && ((int) c <= 90)){
                num_consonants++;
            }
            else{
                j = 0;
            }
        }
   }
   return num_consonants - j;
}

int main(){
    //Declare the string
    char string[100];

    //Ask for input until user only presses enter
    while (1){
        fgets(string, 100, stdin);
        if (string[0] != '\n'){
            printf("Number of consonants=%d\n", count_consonants(string));
        }
        else{
            break;
        }
    }
    return 0;
}