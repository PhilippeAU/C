#include <stdio.h>

//Fun��o que soma 10 ao valor recebido
void soma10(int x){
	
	x = x + 10;
	printf("Valor de x apos a soma: %d\n", x);
	return;
	
}

void soma10p(int *x){
	
	*x = *x + 10;
	printf("Valor de x apos a soma: %d\n", *x);
	return;
	
}
int main(void){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("O numero digitado foi: %d\n", numero);
	
	//Chamdo da fun��o
	soma10(numero);
	printf("Agora o numero vale: %d\n", numero);
	
	
	
	soma10p(&numero);//Chamada da fun��o com ponteiro com par�metro
	printf("Agora o numero vale: %d\n", numero);
	
	
	
	return 0;
}
