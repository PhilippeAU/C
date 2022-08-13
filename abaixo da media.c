#include <stdio.h>

int main(){

    int N,i;

    printf("Quantos elementos vai ter o vetor: ");
    scanf("%d", &N);

    double vetor[N],soma=0,media;

    for(i=0; i<N; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
        soma = (soma + vetor[i]);
    }
    media = (soma/N);

    printf("\nMedia do Vetor: %.3lf\n", media);

    printf("\nElementos Abaixo da Media: \n");

    for(i=0; i<N; i++){
        if(vetor[i] < media){
        printf("%.1lf\n",vetor[i]);
    }

}
    return 0;
}