/*
CH-230-A
a4 p4.c
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

    //Loop that goes through all the characters in the string
    for (int i = 0; str[i] != '\0'; i++){
        //Loop that goes through all the vowels
        for (int n = 0; n < 10; n++){
            //Check if character is a vowel
            if (str[i] == vowels[n]){
                num_consonants--;
            }
        }

        //Confrim whether character is a letter
        if (str[i] != ' '){
            if (((int) str[i] >= 97) && ((int) str[i] <= 122)){
                num_consonants++;
            }
            else if(((int) str[i] >= 60) && ((int) str[i] <= 90)){
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