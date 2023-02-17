/*
CH-230-A
a4 p7.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

void printout_matrix(int arr[30][30], int num){
    //Print the message and matrix
    printf("The entered matrix is:\n");
    for ( int i = 0; i < num; i++){
        for ( int j = 0; j < num; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void under_maindig(int arr[30][30], int num){
    /*
    Counter keeps track of the number of ints
    we'll need to print for each row
    */
    int counter = 1;

    //Print the message and the numbers
    printf("Under the main diagonal:\n");
    for (int i = 1; i < num; i++){
        for (int j = 0; j < counter; j++){
                printf("%d ", arr[i][j]);
        }

        //Add 1 to the counter each iteration
        if (counter < num){
            counter++;
        }
        //Break loop if it's equal to num
        else{
            break;
        }
    }
    printf("\n");
}

int main(){
    //Declare the matrix
    int matrix[30][30];
    //Declare the number of rows/cols
    int n;

    //Ask for the number of rows/cols
    scanf("%d", &n);

    //Ask for each value
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    //Execute the functions
    printout_matrix(matrix, n);
    under_maindig(matrix, n);

    return 0;
}
