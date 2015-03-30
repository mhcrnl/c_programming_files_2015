#include<stdio.h>

int perfectNumber(int n1){
    int  i=1, sum =0;
    while(i<n1) {
        if(n1%i==0)
            sum = sum +i;
        i++;
    }

    if (sum==n1)
        printf("%d este un numar perfect.", i);
    else
        printf("%d nu este numar perfect.",i);

    return i;
}

int main(){
    int n;
    printf("introduce-ti un numar: ");
    scanf("%d", &n);
    perfectNumber(n);
    //printf("Afisare numar perfect %d.", perfectNumber(n));
}
