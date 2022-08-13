#include <stdio.h>

int main(){

    float X,Y,Z,i,casos,media;

    printf("Quantos casos voce vai digitar: ");
    scanf("%f", &casos);

    for(i=0;i<casos;i++){

        printf("Digite tres numeros:\n");
        scanf("%f %f %f",&X,&Y,&Z);

        media = (((X*2) + (Y*3) + (Z*5))/10);

        printf("MEDIA: %.1f\n", media);

    }

    return 0;

}    