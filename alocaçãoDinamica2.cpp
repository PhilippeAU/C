/* 
Fa�a um programa para armazenar em memoria um vetor de dados contendo 1500
valores do tipo int, usando a fun��o de aloca��o din�mica de mem�ria CALLOC:
a) Atribua para cada elemento do vetor o valor do seu �ndice.
b) Exibir na tela os 10 primeiros e os 10 �ltimos elementos do vetor
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, i;
    /*alocando espa�o para 1500 inteiros*/
    ptr = (int*)calloc(1500 , sizeof(int));
    /*atribuindo o valor do indice a cada espa�o do vetpr alocado*/
    for(i = 0 ; i < 1500; i++){
       ptr[i] = i;
    }
     /*imprimindo os 10 primeiros e 10 ultimos numeros*/
    for(i = 0 ; i < 1500; i++){
       if(i <= 9 || i > 1489)
            printf("%d ", ptr[i]);
    }
    /*desalocando o espa�o utilizado anteriormente*/
    free(ptr);
    return 0;
}
