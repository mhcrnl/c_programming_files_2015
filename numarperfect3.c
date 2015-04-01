#include<stdio.h>

int perfectNumber(int n1){
    int  i=1, sum =0;
    while(i<n1) {
        if(n1%i==0)
            sum = sum +i;
        i++;
    }

    if (sum==n1)
        printf("%d este un numar perfect.\n", i);
    else
        printf("%d nu este numar perfect.\n",i);

    return i;
}

int main(){
    int n;
    printf("Introduce-ti un numar(q pentru a inchide): ");
    while(scanf("%d", &n)==1){
        perfectNumber(n);
        printf("Introduce-ti un numar (q pentru a inchide): ");
    }
    printf("LA REVEDERE!");
    return 0;
}

