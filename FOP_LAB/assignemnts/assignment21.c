#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char data[] = "Hello World";
    char buffer[50];
    fp = fopen("/workspaces/C_Projects/PROJECT.txt", "a+");
    if(fp == NULL){
        printf("error opening file");
        return 1;

    }
     fwrite(data, sizeof(char), sizeof(data), fp);
     printf("data written to file.\n");
     fseek(fp,0, SEEK_SET);

     fread(buffer, sizeof(char), sizeof(data), fp);

     printf("data read from file : %s\n", buffer);

     fclose(fp);
     printf("file closed succesfullu\n");
     return 0;
}