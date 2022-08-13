#include <stdio.h>

int main(){

    int N,i;
    double soma=0,media;

    printf("Quantos numetos voce vai digitar? ");
    scanf("%d", &N);

    double vetor[N];

    for (i=0; i<N; i++){

        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    for (i=0; i<N; i++){
        soma = (soma + vetor[i]);

    }
    media = (soma / N); 
  
    printf("Valores: ");

    for (i=0; i<N; i++){
        printf("%.1f", vetor[i]);

    }

    printf("\nSoma: %.2f\n",soma);
    printf("Media: %.2f\n",media);

    return 0;
}