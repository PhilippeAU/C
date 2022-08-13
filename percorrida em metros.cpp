#include <stdio.h>

int main(){
	
	float D,CG,CM;
	
	printf("Digite a distancia percorrida em metros: ");
	scanf("%f", &D);
	printf("Digite o combustivel gasto: ");
	scanf("%f", &CG);	
	
	CM = (D / CG);
	
	printf("O consumo medio: %.3f", CM);
}
