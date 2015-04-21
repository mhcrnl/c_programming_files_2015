#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Angajat{
    char nume[32];
    char prenume[32];
    char telefon[11];
} Angajat;

void Afisare(struct Angajat afi);
void CitesteFila(void);

int main(void){
    struct Angajat *a;
    int i, n;
    //deschidere file pentru salvarea datelor
    FILE *fp;
    if((fp=fopen("angajat.txt", "a+"))==NULL){
        printf("\nEroare la deschiderea filei.");
        exit(1);
    }
    /*
    while(fscanf(fp, "%s %s %s",(a+i)->prenume, (a+i)->nume, (a+i)->telefon)!=EOF){
        fprintf(fp, "\n%s %s %s ", (a+i)->prenume, (a+i)->nume, (a+i)->telefon);
    }
    */
    //obtinerea numarului de structuri de introdus
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
        //salvarea datelor in fila de salvare fp

        fprintf(fp, "\n%s %s %s ", (a+i)->prenume, (a+i)->nume, (a+i)->telefon);
    }
    fclose(fp);
    CitesteFila();
    return 0;
}

void Afisare (struct Angajat a){
    FILE *readf;

    //printf("\n%s, %s : Tel: %s", (a+i)->prenume, (a+i)->nume, (a+i)->telefon);
}
void CitesteFila(void){
    /*
     Citeste datele din fila in care a scris programul.
    */
    char ch, file_name[25];
    FILE *rfp;
    rfp = fopen("angajat.txt", "r");
    if(rfp==NULL){
        perror("Eroare la deschiderea filei.\n");
        exit(EXIT_FAILURE);
    }
    printf("Continutul filei este:\n");
    while((ch=fgetc(rfp))!=EOF)
        printf("%c", ch);
    fclose(rfp);
    //return 0;
}
