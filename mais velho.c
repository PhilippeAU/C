#include <stdio.h>

int main(){

    int N,Midade,posimaior=0,i;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    int idades[N];
    char nomes[N][50];

    for(i=0; i<N; i++){

        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        scanf("%s", &nomes[i][0]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }
    
    Midade = idades[0];

    for(i=1; i<N; i++){

        if(idades[i] > Midade){
            Midade = idades[i];
            posimaior = i;
        }
    }
    printf("PESSOA MAIS VELHA: %s\n", nomes[posimaior]);

}