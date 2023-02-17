/*
CH-230-A
a2 p10.c
Jon Lumi
jlumi@jacobs-university.de
*/

#include<stdio.h>

int main(){
    int counter = 1, n = 0;
    /* 
    "counter" is used to get the determine when the loop that displays the 
    days hours should end.
    */
    while (n <= 0){
        //Get the input
        scanf("%d", &n);

        //Loop that keeps the user in until they give a possible input (a positive integer)
        if (n > 0) {
            while (counter <= n){
                if (counter == 1) {
                    printf("1 day = 24 hours\n");
                    counter +=1;
                }
                else {
                    printf("%d days = %d hours\n", counter, counter*24);
                    counter += 1;
                }
            }
        }
    }
    return 0;
}