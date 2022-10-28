//Ponteiro de ponteiro 
//Muito utilizado na alocação dinâmica de matrizes

#include <stdio.h>
#include <conio.h>

int main(void){

	int x, *ptrx,**pptrx;
	
	//Inicializando a variável com zero
	x = 0;
	printf("\nValor de x = %d\n", x);
	printf("Endereco de x: %x\n\n", &x);
	
	//Atribuindo os endereços para os ponteiros
	ptrx = &x;//ptrx aponta para x
	pptrx = &ptrx;//pptrx aponta para o ptrx
	
	*ptrx = *ptrx + 10;//Mudando o valor da variavel apontada
	
	printf("\nValor de x = %d" , x);
	printf("\nEndereco apontado por ptrx: %x", ptrx);
	printf("\nValor da variavel X que esta sendo apontada por ptrx: %d", *ptrx); // * mostra o valor da variavel que a variavel ponteira esta apontado
	printf("\nEndereco de memoria da variavel ptrx %x\n",&ptrx);
	
	**pptrx = **pptrx + 10;
	printf("\n\nValor de x = %d", x);
	printf("\nEndereco apontado por **pptrx: %x", pptrx);
	printf("\nVAlor da variavel para a qual o pptrx faz referencia: %d", **pptrx);
	printf("\nEndereco de memoria da variavel **pptrx %x\n\n", &pptrx);

	
	return 0;




}
