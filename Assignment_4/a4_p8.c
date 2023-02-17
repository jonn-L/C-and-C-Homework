/*
CH-230-A
a4 p8.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

void printout_matrix(int arr[30][30], int num){
    //Print out the message and the matrix
    printf("The entered matrix is:\n");
    for ( int i = 0; i < num; i++){
        for ( int j = 0; j < num; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void under_secdig(int arr[30][30], int num){
    //Print out the message and the numbers
    printf("Under the secondary diagonal:\n");
    //Loop that starts from the proper number in the row
    for (int i = 1; i < num; i++){
        for (int j = (num - i); j < num; j++){
                printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}

int main(){
    //Declare the matrix
    int matrix[30][30];
    //Declare the number of rows/cols
    int n;

    //Ask for the numvber of rows/cols
    scanf("%d", &n);

    //Ask for each value
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    //Execute the functions
    printout_matrix(matrix, n);
    under_secdig(matrix, n);

    return 0;
}
