/*
CH-230-A
a5 p9.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void read_mat(int ***mat, int row, int col, int dep){
    //Get values for matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            for (int k = 0; k < dep; k++){
                scanf("%d", &mat[i][j][k]);
            }
        }
    }
}

void print_mat(int ***mat, int row, int col, int dep){
    //Print matrix values by section
    for (int i = 0; i < dep; i++){
        printf("Section %d:\n", i + 1);
        for (int j = 0; j < row; j++){
            for (int k = 0; k < col; k++){
                printf("%d ", mat[j][k][i]);
            }
            printf("\n");
        }
    }
}

int main(){
    //Declare rows, columns, and depth
    int row, col, dep;
    //Declare matrix
    int ***mat;

    //Ask for the variables
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &dep);

    //Allocate memory for the 3d matrix
    mat = (int***) malloc(sizeof(int**) * row);
    if (mat == NULL){
        exit(1);
    }
    for (int i = 0; i < row; i++){
        mat[i] = (int**) malloc(sizeof(int*) * col);
        if (mat[i] == NULL){
            exit(1);
        }
        for (int j = 0; j < col; j++){
            mat [i][j] = (int*) malloc(sizeof(int) * dep);
            if (mat[i][j] == NULL){
                exit(1);
            }
        }
    }

    //Call functions
    read_mat(mat, row, col, dep);
    print_mat(mat, row, col, dep);

    //Free allocated memory for 3d matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            free(mat[i][j]);
        }
        free(mat[i]);
    }
    free(mat);
    return 0;
}