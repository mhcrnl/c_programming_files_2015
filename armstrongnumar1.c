/*
autor: mhcrnl@gmail.com 0722270796
program armstronnumar1.c

*/
#include<stdio.h>
int main(){
    int num, r, sum, temp;
    for(num=1; num<=500; num++){
        temp=num;
        sum=0;
        while(temp!=0){
            r=temp%10;
            temp=temp/10;
            sum =sum+(r*r*r);
        }
        if(sum==num)
            printf("%d, ", num);
    }
    return 0;
}
