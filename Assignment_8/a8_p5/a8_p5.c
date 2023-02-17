/*
CH-230-A
a8 p5.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declare file pointer, char, and sum
    FILE *fp;
    char ch;
    int sum = 0;

    //Open file and check if NULL
    fp = fopen("chars.txt", "r");
    if (fp == NULL){
        printf("Some error ocurred!\n");
        exit(1);
    }

    //Caculate sum through a for loop and then close file
    for (int i = 0; i < 2; i++){
        ch = getc(fp);
        sum = sum + ch;
    }
    fclose(fp);

    //Open new file and print result, then close
    fp = fopen("codesum.txt", "w");
    fprintf(fp, "%d", sum);
    fclose(fp);

    return 0;
}