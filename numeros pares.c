#include <stdio.h>

int main(){

    int N,i,pares=0;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &N);

    int vetor[N];

    for(i=0; i<N; i++){

        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Numeros pares: \n");

    for(i=0; i<N; i++){

        if(vetor[i] % 2 == 0){

            printf("%d  ",vetor[i]);
            pares++;
        }
    }

    printf("Quantidade de pares: %d", pares);

    
}