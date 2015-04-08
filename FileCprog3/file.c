#include<stdio.h>
#include<stdlib.h>

int main (void){

    FILE *myFile;
    myFile=fopen("numere.txt", "r");

    int numberArray[16];
    int i;

    if(myFile==NULL){
        printf("Eroare la citirea filei!");
        exit(0);
    }
    for(i=0; i<16; i++){
        fscanf(myFile, "%d,", &numberArray[i]);
        //printf("Numerele sunt: %d\n\n", numberArray[i]);
    }
    for(i=0; i<16; i++){
        printf("Numerele sunt: %d\n\n", numberArray[i]);
    }
    fclose(myFile);
    return 0;
}
