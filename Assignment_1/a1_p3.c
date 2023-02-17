/*
CH-230-A
a1_p3.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include <stdio.h>

int main() {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    return 0;
}
/*The reason why the code did not compile at first
was because there was a missing "#" before "include".
After that, in order for the result of 5/13.5 to be
correct, it was needed to change "a" or "b" to a float
type, and change the "%d" to "%f. This is because the
result was being rounded to a whole number and because
in C int/int=int, while int/float=float(in this case
it's float, it could also be double).*/