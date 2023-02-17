#include<stdio.h>

int main(){
    char buffer[64];

    FILE *rfp = fopen("file1.txt", "rb");
    FILE *wfp = fopen("output.txt", "wb");

    int size = fread(&buffer, sizeof(char), 64, rfp);

    printf("%d", size);

    fwrite(&buffer, sizeof(char), size, wfp);
    return 0;
}