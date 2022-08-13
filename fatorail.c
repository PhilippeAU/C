#include <stdio.h>

int main(){

    int X,N,i,F=1;

    printf("Digite um numero de 0 ate 15: ");
    scanf("%d", &N);

    for(i=N;i>0;i--){

        F = F * i;

    }

    printf("Fatorial: %d",F);

}