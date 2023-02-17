/*
CH-230-A
a5 p8.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

void read_matrix(int **mat, int dim1, int dim2){
    for (int i = 0; i < dim1; i++){
        for (int j = 0; j < dim2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_matrix(int **mat, int dim1, int dim2){
    for (int i = 0; i < dim1; i++){
        for ( int j = 0; j < dim2; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int matrix_prod(int **m1, int **m2, int **m3, int d1, int d3){
    for (int i = 0; i < d1; i++){
        for (int k = 0, j = 0; k < d3; k++, j++){
            m1[i][k] = m2[i][j] * m3[j][k];
        }
    }
    return **m1;
}

int main(){
    //Declare the arrays
    int **mat_a, **mat_b, **mat_prod; 
    int n, m, p;

    //Get the dimensions
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    //Allocate the memory for all the arrays
    mat_a = (int**) malloc(sizeof(int*) * n);
    if (mat_a == NULL){
        exit(1);
    }
    for (int i = 0; i < n; i++){
        mat_a[i] = (int*) malloc(sizeof(int) * m);
        if (mat_a[i] == NULL){
            exit(1);
        }   
    }
    mat_b = (int**) malloc(sizeof(int*) * m);
    if (mat_b == NULL){
        exit(1);
    }
    for (int i = 0; i < m; i++){
        mat_b[i] = (int*) malloc(sizeof(int) * p);
        if (mat_b[i] == NULL){
            exit(1);
        } 
    }
    mat_prod = (int**) malloc(sizeof(int*) * n);
    if (mat_prod == NULL){
        exit(1);
    } 
    for (int i = 0; i < n; i++){
        mat_a[i] = (int*) malloc(sizeof(int) * p);
        if (mat_prod[i] == NULL){
            exit(1);
        } 
    }

    //Read the values and print matrix A
    read_matrix(mat_a, n, m);
    printf("Matrix A:\n");
    print_matrix(mat_a, n, m);

    //Read the values and print matrix B
    read_matrix(mat_b, m, p);
    printf("Matrix B:\n");
    print_matrix(mat_b, m, p);

    //Calculate the AxB and print it
    matrix_prod(mat_prod, mat_a, mat_b, n, p);
    printf("The multiplication result AxB:\n");
    print_matrix(mat_prod, n, p);

    //Free the allocated memory for all the arrays
    for (int i = 0; i < n; i ++){
        free(mat_a[i]);
    }
    free(mat_a);
    for (int i = 0; i < m; i ++){
        free(mat_b[i]);
    }
    free(mat_b);
    for (int i = 0; i < n; i ++){
        free(mat_prod[i]);
    }
    free(mat_prod);

    return 0;
}