#include <stdio.h>

main(){
	
	float PU,UC,VD,preco,troco;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &PU);
	printf("Digite quantos produtos comprou: ");
	scanf("%f", &UC);
	printf("Digite quanto pagou: ");
	scanf("%f", &VD);
	
	preco = (PU * UC);
	troco = (VD - preco);
	
	printf("O valor do troco eh:%f", troco);

}
