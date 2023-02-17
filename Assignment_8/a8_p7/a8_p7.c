/*
CH-230-A
a8 p7.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declare file pointers and open the files
    FILE *fp1 = fopen("text1.txt", "r");
    FILE *fp2 = fopen("text2.txt", "r");
    FILE *fp3 = fopen("merge12.txt", "w");

    //Check if any of the pointers are NULL
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL){
        printf("Some error ocurred!\n");
        exit(1);
    }

    //Declare ch
    char line[256];

    //Copy the content of the first file into the merge file
    while ((fgets(line, sizeof(line), fp1)) != NULL){
        fputs(line, fp3);
    }

    //Copy the content of the second file into the merge file
    while ((fgets(line, sizeof(line), fp2)) != NULL){
        fputs(line, fp3);
    }

    //Close all the files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;

}