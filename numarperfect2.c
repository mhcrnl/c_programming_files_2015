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
int main(){
    int n, i=1, sum=0;
    printf("Introduce-ti un numar pentru verificare: ");
    scanf("%d", &n);
    while(i<n) {
        if(n%i==0)
            sum=sum+i;
            i++;
    }
    if(sum==n)
        printf("%d este un numar perfect.", i);
    else
        printf("%d nu este un numar perfect.", i);
    return 0;
}
