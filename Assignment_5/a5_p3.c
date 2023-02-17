/*
CH-230-A
a5 p3.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>

int count_lower(char* str){
    //Declare lowercase number count
    int lower = 0;
    //Count the lowercases using ASCII
    for (int n = 0; str[n] != '\0'; n++){
        if (((int) str[n] >= 97) && ((int) str[n] <= 122)){
            lower ++;
        }
    }
    return lower;
}

int main(){
    //Declare string
    char str[50];

    while(1){
        //Get string from user
        fgets(str, 50, stdin);
        
        //Check if user only pressed enter
        if (str[0] == '\n'){
            //Stop if so
            break;
        }
        else{
            //Delete "\n" and print the number of lowercase
            str[strcspn(str, "\n")] = 0;
            printf("%d\n", count_lower(str));
        }
    }
    return 0;
}