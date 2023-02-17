/*
CH-230-A
a1_p4.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>

int main(){
    int x=17, y=4;
    int sum=x+y, product=x*y, difference=x-y, rem=x % y;
    float division=(float) x/y;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%lf\n", division);
    printf("remainder of division=%d\n", rem);
    return 0;
}