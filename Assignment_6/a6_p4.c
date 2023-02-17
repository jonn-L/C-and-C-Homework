/*
CH-230-A
a6 p4.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#define INTERMEDIATE(a, b) (a*b)

int main(){
    //Declare the needed variables
    int size, scalprod = 0;

    //Get the size of the vectors from user
    scanf("%d", &size);

    //Declare vectors with that size
    int vec1[size], vec2[size];

    //Ask for input for vectors
    for (int i = 0; i < size; i++){
        scanf("%d", &vec1[i]);
    }
    for (int i = 0; i < size; i++){
        scanf("%d", &vec2[i]);
    }   

    //Print intermediate vlaues if intermediate is defined
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for (int i = 0; i < size; i++){
        printf("%d\n", INTERMEDIATE(vec1[i], vec2[i]));
    } 
#endif

    //Find scalar product
    for (int i = 0; i < size; i++){
        scalprod += (vec1[i] * vec2[i]);
    }

    //Print the scalar product
    printf("The scalar product is: %d\n", scalprod);
    
    return 0;
}