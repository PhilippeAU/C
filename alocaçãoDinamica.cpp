#include <stdio.h>
#include <stdlib.h>

/* 
Fa�a um programa que receba do usu�rio o tamanho de uma string e chame uma fun��o
para alocar dinamicamente essa string. Em seguida, o usu�rio dever� informar o
conte�do dessa string. O programa imprime a string sem suas vogais.
*/

int main(){
    int i, n;
    char *ptr;

    printf("Entre com o tamanho da string: ");
    scanf("%d", &n);

    /*alocando espa�o para n inteiros*/
    ptr = (char*)malloc(n * sizeof(char));

    printf("Digite a string: ");
    scanf(" %[^\n]", ptr);
    i = 0;
    /*mostrando a string sem vogais*/
    while(ptr[i] != '\0'){
        if(ptr[i]!= 'a' && ptr[i]!= 'A' && ptr[i]!= 'e' && ptr[i]!= 'E' && ptr[i]!= 'i' && ptr[i]!= 'I' && ptr[i]!= 'o' && ptr[i]!= 'O' && ptr[i]!= 'u' && ptr[i]!= 'U')
            printf("%c  ", ptr[i]);
            i++;
    }
    /*desalocando o espa�o utilizado anteriormente*/
    free(ptr);
    return 0;
}
