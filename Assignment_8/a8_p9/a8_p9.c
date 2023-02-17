/*
CH-230-A
a8 p9.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //Declare buffer
    char buffer[64];

    //Declare n and ask for the number of files to be conated
    int n;
    scanf("%d", &n);

    //Declare file array pointer
    FILE *rfp[n];
    //Ask for the names of the files and open them
    for (int i = 0; i < n; i++){
        char filename[256];
        scanf(" %s", filename);
        
        rfp[i] = fopen(filename, "rb");
        if (rfp[i] == NULL){
            printf("Some error ocurred!\n");
            exit(1);
        }       
    }

    //Open the output file
    FILE *wfp = fopen("output.txt", "wb");
    if (wfp == NULL){
        printf("Some error ocurred!\n");
        exit(1);
    }   

    //Print the message to the output
    printf("Concating the content of 3 files ...\n");
    printf("The result is:\n");
    //Loop through the rfp array
    for (int i = 0; i < n; i++){
        //Read each file
        int size = fread(&buffer, sizeof(char), 64, rfp[i]);
        //Write content to the output file and a \n 
        fwrite(&buffer, sizeof(char), size, wfp);
        fwrite("\n", sizeof(char), 1, wfp);
        //Write content to the standard output and a \n 
        fwrite(&buffer, sizeof(char), size, stdout);
        fwrite("\n", sizeof(char), 1, stdout);
    }
    //Print final message
    printf("The result was written into output.txt\n");

    //Close all the files
    for (int i = 0; i < n; i++){
        fclose(rfp[i]);
    }
    fclose(wfp);

    return 0;
}