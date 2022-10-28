#include <stdio.h>
#include <conio.h>

/*
 Para passar um vetor para uma fun��o usando linguagem C utiliza-se um ponteiro como par�metroda fun��o.
 Ao usarmos o ponteiro como par�metro, na realidade estamos passando o endere�o inicial do vetor e n�o os seus elementos.
*/

float media (int n, float *vnotas);

int main (void){
	
	float vnotas[10];
	float media_notas;
	int i;
	
	//Leitura das notas
	
	for(i = 0;i < 10; i++){
		
		printf("Digite os valores das notas: ");
		scanf("%f", &vnotas[i]);
	}
	
	//Chamada da fun��o
	media_notas = media(10,vnotas);
	
	printf("\nMedia = %.1f \n", media_notas);
	
	return 0;	
}

/*
	Fun��o para c�lculo da m�dia
		Par�metros:
			Recebe a quantidade de elementos n
			Recebe o endere�o inicial do vetor notar em *vnotas
		Retorno:
			Retorna a m�dia na vari�vel m
*/

float media (int n, float *vnotas){
	
	int i;
	float m = 0, soma = 0;
	
	//Fazendo a somat�ria das notas
	for (i = 0; i < n; i++){
		
		soma = soma + vnotas[i];
		
	}
	//Dividindo pela quantidade de elementos n
	m = soma / n;
	
	//Retornando a m�dia
	return m;
}
