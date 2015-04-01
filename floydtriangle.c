#include<stdio.h>

int main(void){

    int i, j, r, k=1;

    printf("Introduce-ti un numar (q pt. inchidere): ");

    while(scanf("%d", &r)==1){
        printf("FLOYD's TRIANGLE\n\n");
        for(i=1;i<=r; i++){
            for(j=1; j<=i; j++, k++)
                printf(" %d", k);
        printf("\n");
        }
        printf("Introduce-ti un numar (q pt. inchidere): ");
    }
    printf("LA REVEDERE!");
    return 0;
}
