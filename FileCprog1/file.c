#include<stdio.h>
#include<stdlib.h>

int main(void){
    char c[1000];
    FILE *fptr;
    fptr=fopen("program.txt", "w");
    if(fptr==NULL){
        printf("ERROR!");
        exit(1);
    }
    printf("Introduce-ti un text: ");
    gets(c);
    fprintf(fptr, "%s", c);
    fclose(fptr);
    return 0;
}
