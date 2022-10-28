#include <stdio.h>
#include <conio.h>

/*
 Para passar um vetor para uma função usando linguagem C utiliza-se um ponteiro como parâmetroda função.
 Ao usarmos o ponteiro como parâmetro, na realidade estamos passando o endereço inicial do vetor e não os seus elementos.
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
	
	//Chamada da função
	media_notas = media(10,vnotas);
	
	printf("\nMedia = %.1f \n", media_notas);
	
	return 0;	
}

/*
	Função para cálculo da média
		Parâmetros:
			Recebe a quantidade de elementos n
			Recebe o endereço inicial do vetor notar em *vnotas
		Retorno:
			Retorna a média na variável m
*/

float media (int n, float *vnotas){
	
	int i;
	float m = 0, soma = 0;
	
	//Fazendo a somatória das notas
	for (i = 0; i < n; i++){
		
		soma = soma + vnotas[i];
		
	}
	//Dividindo pela quantidade de elementos n
	m = soma / n;
	
	//Retornando a média
	return m;
}
