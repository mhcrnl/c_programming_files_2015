/*


*/
#include<stdio.h>

int perfectNumar(int min, int max);

int main(void){
    int min=1, max, rezultat;
    printf("introduce-ti intevalul de valori minim - maxim (q pentru inchidere): \n");
    while(scanf(" %d", &max)==1){
        if(min<0)
            printf("Nu introduce-ti valori negative, va rog.\n");
        else if(max > 100000)
            printf("nu introduceti valori mai mari de 100.000.\n");
        else{
            rezultat = perfectNumar(min,max);
            if(rezultat == perfectNumar(min, max))
            printf("Valorile numerelor perfecte din interval sunt: %d \n", rezultat);
        }
        printf("introduce-ti intevalul de valori minim - maxim (q pentru inchidere): \n");
    }
    printf("LA REVEDERE!");
    return 0;
}

int perfectNumar(int min, int max){
    int i, n, sum;
    for(n=min; n<=max; n++){
        i=1;
        sum=0;
        while(i<n){
            if(n%i==0)
                sum=sum+i;
            i++;
        }
        }
        if(sum==n)
            printf("%d", n);
            return n;

}
