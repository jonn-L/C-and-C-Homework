/*
CH-230-A
a5 p11.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

int primecheck(int n, int m){
    //check if x is 1
    if (n <= 1){
        //If so return 0
        return 0;
    }
    //Check if x is equal to divisor
    else if (n == m){
        //If so return 1
        return 1;
    }
    //Check if x is divisible by divisor
    else if (n % m == 0){
        //If so return 0
        return 0;
    }
    else{
        //If none apply add 1 to divisor
        return primecheck(n, m + 1);
    }

}

int main(){
    //Declare x and the divisor
    int x, divisor = 2;

    //Get x from user
    scanf("%d", &x);

    /*
    Check whether x is prime or not based
    on the return value of function
    */
    if (primecheck(x, divisor) == 1){
        //If return value is 1, x is prime
        printf("%d is prime\n", x);
    }
    else{
        //If return value is 0, x is not prime
        printf("%d is not prime\n", x);
    }
    return 0;
}