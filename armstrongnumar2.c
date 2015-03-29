/*
autor mhcrnl@gmail 0722270796
*/
#include <stdio.h>

int main(){
    int num,r, sum, temp;
    int min, max;

    printf("Introduceti numarul minin: ");
    scanf("%d", &min);

    printf("Introduce-ti numarul maxim: ");
    scanf("%d", &max);
    printf("Numerele Armstrong in intervalul ales sunt: ");
    for(num=min;num<=max; num++){
        temp= num;
        sum=0;
        while(temp != 0){
            r=temp%10;
            temp=temp/10;
            sum = sum+(r*r*r);
        }
        if(sum==num)
            printf("%d, ", num);
    }
    return 0;
}
