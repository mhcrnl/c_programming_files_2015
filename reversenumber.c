#include<stdio.h>
int main(void){
    int num, r, num1, reverse =0;
    printf("Enter a number(q=quit): ");

    while(scanf("%d", &num1)==1){
        num =num1;
        while(num){
            r=num%10;
            reverse=reverse*10+r;
            num=num/10;

        }
        printf("Reverse of number: %d \n", reverse);
        reverse=0;
        printf("Enter a number(q=quit): ");
    }
    return 0;
}
