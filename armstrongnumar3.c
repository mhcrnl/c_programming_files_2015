/*
autor mhcrnl@gmail.com 0722270796
*/

#include<stdio.h>
int main(){
    int num, r, sum=0,temp;
    printf("Introduce-ti un numar: ");
    scanf("%d", &num);

    temp=num;
    while(num!=0){
        r=num%10;
        num=num/10;
        sum=sum+(r*r*r);
    }
    if(sum==temp)
        printf("%d este numar Armstrong. ", temp);
    else
        printf("%d nu este un numar Armstrong.", temp);
    return 0;

}
