/*
CH-230-A
a3 p4.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c)
{
int idx;
/* Loop until end of string */
for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
{
    /* do nothing */
}
return idx;
}
int main() {
char line[80];
while (1) {
printf("Enter string:\n");
fgets(line, sizeof(line), stdin);
printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
}
}

/*
To fix it, all we need to do is all curly brakcets
to the for loop. This is because before, the 
"return idx;" was being executed everytime the loop
looped, making it so that the output was always 0.
*/