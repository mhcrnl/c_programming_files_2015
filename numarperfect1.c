/*
    Autor: mhcrnl@gmail.com tel:0722270796
    Numar perfect este un numar al carui divizori, excluzând
    insasi numarul, adunati dau numarul initial.
    6 >> 1+2+3=6
    28 >> 1+2+4+7+14=28
    alte numere perfecte 496, 8128
    programul numarperfect1.c - cauta numerele perfecte in intervalul ales de dvs..
*/
#include<stdio.h>

int main() {
    int n,i,sum;
    int min, max;
    printf("Introduceti numarul minim: ");
    scanf("%d", &min);

    printf("Introduceti numarul maxim: ");
    scanf("%d", &max);

    printf("Numerele perfecte din intervalul ales de dvs: ");

    for(n=min;n<=max; n++){
        i=1;
        sum=0;
        while(i<n){
            if(n%i==0)
                sum= sum+i;
            i++;
        }
        if(sum==n)
            printf("%d ", n);
    }
    return 0;
}
