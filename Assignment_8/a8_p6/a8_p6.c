/*
CH-230-A
a8 p6.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //Declare file pointer, char arrays, and doubles
    FILE *fp;
    char file1[30], file2[30];
    double num1, num2;

    //Get the name of the files from user
    fgets(file1, 30, stdin);
    file1[strcspn(file1, "\n")] = 0;
    fgets(file2, 30, stdin);
    file2[strcspn(file2, "\n")] = 0;

    //Open the first file and check if NULL
    fp = fopen(file1, "r");
    if (fp == NULL){
        printf("Some error ocurred!\n");
        exit(1);
    }
    //Get num1 and close file
    fscanf(fp, "%lf", &num1);
    fclose(fp);

    //Open the second file and check if NULL
    fp = fopen(file2, "r");
    if (fp == NULL){
        printf("Some error ocurred!\n");
        exit(1);
    }
    //Get num2 and close file
    fscanf(fp, "%lf", &num2);
    fclose(fp);

    //Open results.txt file and check if NULL
    fp = fopen("results.txt", "w");
    if (fp == NULL){
        printf("Some error ocurred!\n");
        exit(1);
    }
    //Output the results to the file
    fprintf(fp, "sum: %lf\n", num1 + num2);
    fprintf(fp, "differnce: %lf\n", num1 - num2);
    fprintf(fp, "product: %lf\n", num1 * num2);
    fprintf(fp, "division: %lf\n", num1 / num2);
    fclose(fp);

    return 0;
}