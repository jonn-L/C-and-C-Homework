/*
CH-230-A
a6 p3.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
//Define macro that find min
#define MIN(a, b, c, min) \
{                         \
    if (a < b){           \
        if (a < c){       \
            min = a;      \
        }                 \
        else{             \
            min = c;      \
        }                 \
    }                     \
    else if (b < c){      \
        min = b;          \
    }                     \
    else{                 \
        min = c;          \
    }                     \
}   

//Define macro that finds max
#define MAX(a, b, c, max) \
{                         \
    if (a > b){           \
        if (a > c){       \
            max = a;      \
        }                 \
        else{             \
            max = c;      \
        }                 \
    }                     \
    else if (b > c){      \
        max = b;          \
    }                     \
    else{                 \
        max = c;          \
    }                     \
}

//Define macro that finds midrange
#define MIDRANGE(a, b, c) (c = (a + b)/2.0)

int main(){
    //Declare needed variables
    int num1, num2, num3;
    int min, max;
    float mid;

    //Ask for input from user
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //Find min, max, and mid-range through macros
    MIN(num1, num2, num3, min);
    MAX(num1, num2, num3, max);
    MIDRANGE(min, max, mid);
    
    //Print result
    printf("The mid-range is: %.6f\n", mid);

    return 0;

}