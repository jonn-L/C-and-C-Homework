/*
CH-230-A
a3 p2.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //Declare the variables
    char ch;
    int n, i;

    //Get the input from user
    scanf("%c", &ch);
    getchar();
    scanf("%d", &n);
    
    //for loop that prints out the output until i=n
    for (i=0; i<=n; i++){
        if (i==0){
            printf("%c\n",ch);
        }
        else{
            printf("%c-%i\n", ch, i);
        }
    }
}