/*
    Autor: mhcrnl@gmail.com tel:0722270796
    Numar perfect este un numar al carui divizori, excluzând
    insasi numarul, adunati dau numarul initial.
    6 >> 1+2+3=6
    28 >> 1+2+4+7+14=28
    alte numere perfecte 496, 8128
    programul numarperfect.c - cauta numerele perfecte in intervalul 1 la 100
    acest interval poate fi schimbat in instructiunea for( ;n<=100; ).
*/
#include<stdio.h>

int main() {
    int n, i, sum;
    printf("Numerele perfecte sunt: ");
    for(n=1; n<=100; n++){
        i=1;
        sum=0;
        while(i<n){
            if(n%i==0)
                sum = sum +i;
            i++;
        }
        if(sum==n)
            printf("%d ", n);
    }
    return 0;
}
