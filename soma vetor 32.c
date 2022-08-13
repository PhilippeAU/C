#include <stdio.h>

int main(){

    int N,i;
    double soma=0,media;

    printf("Quantos numetos voce vai digitar? ");
    scanf("%d", &N);

    double vetor[N];

    for (i=0; i<N; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    for (i=0; i<N; i++){
        soma = (soma + vetor[i]);

    }
    media = (soma / N); 
  
    printf("Valores: ");

    for (i=0; i<N; i++){
        printf("%.1lf  ", vetor[i]);

    }

    printf("\nSoma: %.2lf\n",soma);
    printf("Media: %.2lf\n",media);

    return 0;
}