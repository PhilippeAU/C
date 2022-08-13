#include <stdio.h>

int main(){
	
	float media,P,S;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &P);
	
	while(P < 0 || P > 10){
		
		printf("Valor invalido! Digite Novamente: ");
		scanf("%f", &P);
	}
	
	printf("Digite a sugunda nota: ");
	scanf("%f", &S);
	
	while(S < 0 || S > 10){
		
    	printf("Valor invalido! Digite Novamente: ");
	    scanf("%f", &S);
	}
	
	media = ((P + S)/2);
	printf("Media: %.2f", media);
}
