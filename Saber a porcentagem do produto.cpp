#include <stdio.h>

main(){
	
	float PRECOF,PRECO,DESC,x;
	
	printf("Digite o preco original do produto: \n");
	scanf("%f", &PRECO);
	printf("Digite o valor do produto depois do desconto:\n");
	scanf("%f", &PRECOF);
	
	DESC = ((PRECOF * 100) / PRECO);
	
	x = 100 - DESC;
		
	printf("A porcentagem de desconto do produto e:%f", x);
	
    
	
	
}
