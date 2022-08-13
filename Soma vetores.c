#include <stdio.h>

int main(){

    int N,i,soma;

    printf("Quantos valores voce vai digitar? ");
    scanf("%d", &N);

    int a[N], b[N], c[N];

    printf("Digite os valores do vetor A: \n");

    for(i=0; i<N; i++){

        scanf("%d", &a[i]);

    }
    printf("Digite os valores do vetor B: \n");

    for(i=0; i<N; i++){

        scanf("%d", &b[i]);

    }
    for(i=0; i<N; i++){

        c[i] = a[i] + b[i];
     
    }
    printf("Vetor Resultante: \n");

    for(i=0; i<N; i++){

        printf("%d\n", c[i]);
    }

}

