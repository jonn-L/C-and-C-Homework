/*
CH-230-A
a2 p1.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    double nr_1, nr_2;
    scanf("%lf", &nr_1);
    scanf("%lf", &nr_2);
    printf("sum of doubles=%lf\n", nr_1+nr_2);
    printf("difference of doubles=%lf\n", nr_1-nr_2);
    printf("square=%lf\n", nr_1*nr_1);
    
    int nr_3, nr_4;
    scanf("%d", &nr_3);
    scanf("%d", &nr_4);
    printf("sum of integers=%d\n", nr_3+nr_4);
    printf("product of integers=%d\n", nr_3*nr_4);

    char c_1, c_2;
    getchar();
    scanf("%c", &c_1);
    getchar();
    scanf("%c", &c_2);
    printf("sum of chars=%d\n", (int) (c_1+c_2));
    printf("product of chars=%d\n", (int) (c_1*c_2));
    printf("sum of chars=%c\n", c_1+c_2);
    printf("product of chars=%c\n", c_1*c_2);
    return 0;
}