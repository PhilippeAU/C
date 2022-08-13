#include <stdio.h>

int main(){

    int N,i,soma=0,par=0;
    double media;

    printf("Quantos elementos vai ter o vetor: ");
    scanf("%d", &N);

    int vetor[N];

    for(i=0; i<N; i++){

        printf("Digite um numero: \n");
        scanf("%d", &vetor[i]);

    }
    for(i=0; i<N; i++){

        if(vetor[i] % 2 == 0){
            soma = (soma + vetor[i]);
            par++;

        }
    }
    if(par == 0){
            printf("NENHUM NUMERO PAR!!!");
    }
    else{
    printf("\nMedia dos pares: ");

    media = (soma / par);

    printf("%.1lf", media);
}

}   