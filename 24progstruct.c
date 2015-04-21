#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Angajat{
    char nume[32];
    char prenume[32];
    char telefon[11];
} Angajat;

void Afisare(struct Angajat afi);

int main(void){
    struct Angajat *a;
    int i, n;

    printf("Introduce-ti un numar: ");
    scanf("%d", &n);

    a = (struct Angajat*)malloc(n*sizeof(struct Angajat));
    for(i=0; i<n; ++i){
        printf("Introduce-ti numele: ");
        scanf("%s",(a+i)->nume);
        printf("Introduce-ti prenumele: ");
        scanf("%s",(a+i)->prenume);
        printf("Introduce-ti telefonul: ");
        scanf("%s", (a+i)->telefon);
    //Afisare(a);
    }
    printf("Afisarea informatiilor:\n");
    for(i=0;i<n;++i){
        printf("\n%s, %s : Tel: %s", (a+i)->prenume, (a+i)->nume, (a+i)->telefon);
    }
    return 0;
}

void Afisare (struct Angajat a){

    //printf("\n%s, %s : Tel: %s", (a+i)->prenume, (a+i)->nume, (a+i)->telefon);
}
