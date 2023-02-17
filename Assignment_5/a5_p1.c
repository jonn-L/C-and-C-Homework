/*
CH-230-A
a5 p1.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

void triangle(int n, char ch){
    //Declare variable that keeps track of newlines
    int num_lines = n;
    //Loop that goes trough each line of triangle
    for (int i = 0; i < num_lines; i++, n--){
        //Loop that prints out the character 
        for (int j = 0; j < n; j++){
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main(){
    //Declare n and ch
    int n;
    char ch;

    //Ask user for n and ch
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);

    //Call function
    triangle(n, ch);
    return 0;
}