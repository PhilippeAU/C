#include <stdio.h>

main(){
	
	float PAG, PR, D,x;
	
	printf("Digite o preco do produto:\n");
	scanf("%f", &PR);
	
	printf("Digite o desconto: \n");
	scanf("%f", &D);
	
	PAG = ((PR * D)/ 100);
	
	
	x = PR - PAG;
	
	printf("O valor do produto e:%f",x);	
	
}
