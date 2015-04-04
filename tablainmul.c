#include <stdio.h>

int main(void){
    int r, i, j, k;
    printf("Enter the number range(q to quit): ");

    while(scanf("%d", &r)==1){
        for(i=1;i<=r;i++){
            for(j=1;j<=10;j++)
                printf("%d*%d=%d  ", i, j, i*j);
            printf("\n");
        }
    printf("Enter the number range(q to quit): ");
    }
   return 0;
}
