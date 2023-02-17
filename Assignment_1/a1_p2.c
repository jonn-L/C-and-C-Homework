/*
CH-230-A
a1_p2.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include <stdio.h>

int main() {
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    return 0;
}
/*Before adding "result" in the printf, it was not 
specified which number should be used in the "%d". 
That is why the value before was wrong*/