/*
    CH-230-A
    a3 p11.c
    Jon Lumi
    jlumi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int find_char_pos(char c, char *string);

int main(){
    int max_char = 256, one_len, two_len, pos;
    char one[max_char], two[max_char], concatenated[max_char];
    char copy[max_char], wanted_char;

    //Get the strings from the user
    fgets(one, max_char, stdin);
    fgets(two, max_char, stdin);

    //Remove newlines
    one[strcspn(one, "\n")] = 0;
    two[strcspn(two, "\n")] = 0;

    //Find the lenghts for the strings and print them out
    one_len = strlen(one);
    two_len = strlen(two);
    printf("length1=%d\n", one_len);
    printf("length2=%d\n", two_len);

    //Concatenate the two strings and print it out
    strcpy(concatenated, one);
    strcat(concatenated, two);
    printf("concatenation=%s\n", concatenated);

    //Make the copy string for string two and print it out
    strcpy(copy, two);
    printf("copy=%s\n", copy);

    //Compare and print out the result
    int comparison = strcmp(one, two);
    if (comparison < 0){
        printf("one is smaller than two\n");
    }
    else if (comparison == 0){
        printf("one is equal to two\n");
    }
    else{
        printf("one is larger than two\n");
    }

    //Ask for the charater the user wants to find in the string
    scanf("%c", &wanted_char);
    getchar();

    //Get the position of the wanted character in the string
    pos = find_char_pos(wanted_char, two);

    //Print the adequate message out in regards to the position
    if (pos == -1){
        printf("The character is not in the string\n");
    }
    else{
        printf("position=%d\n", pos);
    }
    return 0;
}

int find_char_pos(char c, char *string){
    int length = strlen(string);
    for (int i = 0; i < length; i++){
        if (string[i] == c){
            return i;
        }
    }
    return -1;
}