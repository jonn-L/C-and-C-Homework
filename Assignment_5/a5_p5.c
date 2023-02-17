/*
CH-230-A
a5 p5.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

double scal_prod(double arr1[], double arr2[], int n){
    //Declare the scal prod with an initial value of 0
    double scal_prod = 0;
    //Loop through the arrays and find the scal prod
    for (int i = 0; i < n; i++){
        scal_prod = scal_prod + (arr1[i] * arr2[i]);
    }
    return scal_prod;
}

double small_ele(double arr[], int n){
    //Declare small ele with an initial value
    double smallest = arr[0];
    //Loop through to find the smallest element
    for (int i = 0; i < n; i++){
        if (smallest > arr[i]){
            smallest = arr[i];
        }
    }
    return smallest;
}

int small_ele_idx(double arr[], int n){
    //Here we add a variable s
    double smallest = arr[0];
    int s = 0;
    //Find the smallest element and it's index (s)
    for (int i = 0; i < n; i++){
        if (smallest > arr[i]){
            smallest = arr[i];
            s = i;
        }
    }
    return s;
}

double large_ele(double arr[], int n){
    //Declare largest element with an initial value
    double largest = arr[0];
    for (int i = 0; i < n; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}

int large_ele_idx(double arr[], int n){
    //Here we also declare l
    double largest = arr[0];
    int l = 0;
    //Find the index of largest (l)
    for (int i = 0; i < n; i++){
        if (largest < arr[i]){
            largest = arr[i];
            l = i;
        }
    }
    return l;
}

int main(){
    //Declare n (number of elements)
    int n;

    //Ask for the size of the vectors
    scanf("%d", &n);

    //Declare vectors of n size
    double v[n], w[n];

    //Ask for the elements of vector v
    for (int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    //Ask for the elements of vector w
    for (int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }

    //Print out the results of the various calculations
    printf("Scalar product=%lf\n", scal_prod(v, w, n));
    printf("The smallest = %lf\n", small_ele(v, n));  
    printf("Position of smallest = %d\n", small_ele_idx(v, n)); 
    printf("The largest = %lf\n", large_ele(v, n));  
    printf("Position of largest = %d\n", large_ele_idx(v, n)); 
    printf("The smallest = %lf\n", small_ele(w, n));  
    printf("Position of smallest = %d\n", small_ele_idx(w, n)); 
    printf("The largest = %lf\n", large_ele(w, n));  
    printf("Position of largest = %d\n", large_ele_idx(w, n)); 

    return 0;
}