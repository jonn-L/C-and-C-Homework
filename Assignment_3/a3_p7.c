/*
CH-230-A
a3 p7.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

//Declare print_form
void print_form(int n, int m, char c);

int main (){
    //Declare the variables
    int n, m;
    char c;

    //Get the input from the user
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);

    //Execute the print_form function
    print_form(n, m, c);
    return 0;
}

void print_form(int n, int m, char c){
    //Declare the needed variables
    int counter, num_of_char, base = n+m-1;

    //Controls the number of rows
    for (counter = 0; counter < n; counter ++){
        //Control the number of characters in the line
        while (m <= base){
            //Print the characters
            for (num_of_char = 0; num_of_char < m; num_of_char++){
                printf("%c", c);
            }
            num_of_char = 0;
            m++;
            printf("\n");
        }
    }
    return;
}