/*
CH-230-A
a7 p5.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

//Function that turns array into ascending order
int ascending(const void *x_void, const void *y_void){
    //We make the pointers into int type, then derefrence them, and then
    //apply that value to int x
    int x = *(int*)x_void;
    //We make the pointers into int type, then derefrence them, and then
    //apply that value to int y
    int y = *(int*)y_void;
    //For any x and y, if x - y is < 0, then x goes before y
    //if x - y = 0, then it doesn't matter
    //if x - y is > 0, then y goes before x
    return x - y;
}

//Function that turns array into descending order
int descending(const void *x_void, const void *y_void){
    //We make the pointers into int type, then derefrence them, and then
    //apply that value to int x
    int x = *(int*)x_void;
    //We make the pointers into int type, then derefrence them, and then
    //apply that value to int y
    int y = *(int*)y_void;
    //For any x and y, if y - x is < 0, then y goes before x
    //if y - x = 0, then it doesn't matter
    //if y - x is > 0, then x goes before y
    return y - x;
}

int main(){
    //Declare variable for size of array and ask user to input it
    int n;
    scanf("%d", &n);

    //Declare an array of that size and ask user for it's values
    int numarr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &numarr[i]);
    }
    
    //Infinite loop
    while(1){
        //Declare char and ask for it's valyue
        char ch;
        scanf(" %c", &ch);  

        //Switch based on the character that was inputed
        switch(ch){
            case 'a':
                //qsort ascending and then print array
                qsort(numarr, n, sizeof(int), ascending);
                for (int i = 0; i < n; i++){
                    printf("%d ", numarr[i]);
                }
                printf("\n");
                break;
            case 'd':
                //qsort descending and then print array
                qsort(numarr, n, sizeof(int), descending);
                for (int i = 0; i < n; i++){
                    printf("%d ", numarr[i]);
                }
                printf("\n");
                break;
            case 'e':
                //Quit programm
                return 0;
        }
    }
    return 0;
}