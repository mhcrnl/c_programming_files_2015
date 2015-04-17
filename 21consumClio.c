

#include <stdio.h>

float ConsumLitriKilometru(float l, float k);
float PretKilometru(float litruKilometru, float pretCombustibil);

int main (void){
    float kilometri, litri;
    float litruKilometru1, pretCombustibil;

    printf("Programul calculeaza costul pe km al masinii.\n\n");

    printf("Introduce-ti numarul de kilometri parcursi: ");
    scanf("%f", &kilometri);

    printf("\nIntroduce-ti numarul de litri consumati: ");
    scanf("%f", &litri);

    printf("\nIntroduce-ti pretul pe litru al combustibilului: ");
    scanf("%f", &pretCombustibil);

    litruKilometru1=ConsumLitriKilometru(litri, kilometri);
    printf("\nConsumul:%lf de combustibil la kilometri: %lf este de: %lf \n",litri,kilometri, litruKilometru1);

    printf("\nPretul pe kilometru este de: %f lei\n", PretKilometru(litruKilometru1,pretCombustibil));

    return 0;
}

float ConsumLitriKilometru(float litri, float kilometri){
    float litruKilometru;
    litruKilometru = litri / kilometri;
    //printf("\n %lf \n", litruKilometru);
    return litruKilometru;

}
float PretKilometru(float litruKilometru, float pretCombustibil){
    float pretKilometru;
    pretKilometru = litruKilometru*pretCombustibil;
    return pretKilometru;
}
