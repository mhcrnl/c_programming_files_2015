/* ---------------------------------------
C code to find the addittion of n numbers without
using recurssion
-------------------------------------------*/
#include<stdio.h>

int getSum(int);

int main(void){
    int n, sum;
    printf("Enter the value of n(q to quit): ");
    while(scanf("%d", &n)==1){
        sum=getSum(n);
        printf("Sum of n numbers: %d\n", sum);
        printf("Enter the value of n(q to quit): ");
    }
    return 0;
}
int getSum(n){
    int sum=0;
    while(n>0){
        sum=sum+n;
        n--;
    }
    return sum;
}
