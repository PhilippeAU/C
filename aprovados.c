#include <stdio.h>

int main(){

    int N,i;

    printf("Quantos numeros serao digitados? ");
    scanf("%d", &N);

double nota1[N],nota2[N];
char nome[N][50];

    for(i=0; i<N; i++){

        printf("Digite nome, primeiro e segunda nota do %dº aluno: ", i + 1);
        scanf("%lf %lf %s", &nota1[i], &nota2[i], &nome[i][0]);
    }
}