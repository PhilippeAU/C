#include <stdio.h>

int main(){

    int N,i,posmaior=0;
    double maior;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &N);

    double vetor[N];

    for(i=0; i<N; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    maior = vetor[0];

    for(i=1; i<N; i++){

        if(vetor[i] > maior){
            maior = vetor[i];
            posmaior = i;
        }
    }
    printf("Maior valor: %.1lf\n", maior);
    printf("Posicao do maior valor: %d", posmaior);

    return 0;

}