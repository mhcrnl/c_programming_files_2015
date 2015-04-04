#include<stdio.h>

long fact(int);

int main (void){
    int line, i, j;
    printf("Enter the no. of lines(q pt inchidere): ");
    while(scanf("%d", &line)==1){
        for(i=0; i<line; i++){
            for(j=0; j<line-i-1; j++)
                printf(" ");
            for(j=0; j<=0; j++)
                printf(" %ld", fact(i)/fact(j)*fact(i-j));
            printf("\n");

    }
    printf("Enter the no. of lines(q pt. inchidere): ");
    }
    return 0;
}

long fact(int num){
    long f=1;
    int i=1;
    while(i<=num){
        f = f*i;
        i++;
    }
    return f;
}
