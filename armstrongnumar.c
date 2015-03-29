/*
autor: mhcrnl@gmail.com tel: 0722270796
program: armstrongnumar.c
*/
#include<stdio.h>
int main(){
    int num, r, sum=0, temp;
    printf("Introduce-ti un numar: ");
    scanf("%d", &num);
    for(temp=num; num!=0; num=num/10){
        r=num%10;
        sum = sum +(r*r*r);
    }
    if(sum==temp)
        printf("%d este un numar Armstrong.", temp);
    else
        printf("%d nu este un numar Armstrong", temp);

    return 0;
}
