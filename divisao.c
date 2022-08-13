#include <stdio.h>

int main(){

    float i,X,Y,Z,divisao;

    printf("Quantos casos voce vai digitar: ");
    scanf("%f", &X);

    for(i=0;i<X;i++){

        printf("Escreva o numerador: ");
        scanf("%f",&Y);

        printf("Escreva o denominador: ");
        scanf("%f",&Z);

        if(Z == 0){

            printf("Divisao impossivel!!!\n");
        }
        else{

            divisao = (Y/Z);    
            printf("DIVISAO: %.2f\n", divisao);
        }
            
    }

    return 0;

}