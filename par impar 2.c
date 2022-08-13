#include <stdio.h>

int main(){

    int N,X,i;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &N);

    for(i=0;i<N;i++){    

        printf("Digite um numero: \n");
        scanf("%d", &X);
    
    if(X == 0){

        printf("NULO!!!");
    }

    else if(X < 0 || X % 2 == 0){

        printf("PAR!!! NEGATIVO!!!\n");    
    }    
    else if(X < 0 || X % 2 == 1){

        printf("IMPAR!!! NEGATIVO!!!\n");
    }
    else if(X > 0 || X % 2 == 0){

        printf("PAR!!! POSITIVO!!!\n");
    }
    else if(X > 0 || X % 2 == 1){

        printf("IMPAR!!! POSITIVO!!!\n");
    }
 
    }
   return 0;


}