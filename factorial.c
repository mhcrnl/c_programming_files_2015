#include<stdio.h>
long fact(int n);
long rfact(int n);

int main (void){
    int num;
    printf("Acest program caluleaza factorialul\n");
    printf("Introduce-ti o valoare in intervalul 0-12 (q pentru inchidere).\n");
    while(scanf("%d", &num)==1){
        if(num<0)
            printf("Fara numere negative, va rog.\n");
        else if(num>12)
            printf("Pastrati valoarea sub 13.\n");
        else{
            printf("loop: %d factorial: %ld\n", num, fact(num));
            printf("recursion: %d factorial= %ld\n", num, rfact(num));
        }
        printf("Introduce-ti o valoare in intervalul 0-12 (q pentru inchidere).\n");
    }
    printf("La revedere!\n");
    return 0;
}

long fact(int n){
    long ans;
    for(ans=1;n>1; n--)
        ans*=n;
    return ans;
}

long rfact(int n){
    long ans;
    if(n>0)
        ans= n*rfact(n-1);
    else
        ans=1;
    return ans;
}
