#include <stdio.h>

main(){
	
	// Programa para transformar um valor metro em valores decímetro, centímetro e milímetro.
	
	float DE, CE, MI, M;
	
	printf("Escreva o valor em metros: ");
	scanf("%f", &M);
	
	DE = M * 10;
	CE = M * 100;
	MI = M * 1000;
	
	printf("O valor em decimetro: %f\n", DE);
	printf("O valor em centimetro: %f\n", CE);
	printf("O valor em milimetro: %f\n", MI);
	
}
