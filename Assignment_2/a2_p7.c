/*
CH-230-A
a2 p7.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    int i = 8;
    while (i >= 4) {
        printf("i is %d\n", i);
        i --;
    }   
    printf("That's it.\n");
    return 0;
}
/*To fix this, all we need to add is
the curly brackets to contain the part
of the code that we want to be excuted
while the criteria in the while loop 
met, otherwise the loop will continue
endlessly.*/