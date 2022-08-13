#include <stdio.h>

main(){
	
	float VAL_REAL, VAL_DOLAR, COT;
	
	printf("Digite a quantidade de dola:\n");
	scanf("%f", &VAL_DOLAR);
	printf("Digite a cotaçao do dolar:\n");
	scanf("%f", &COT);
	
	VAL_REAL = VAL_DOLAR * COT;
	
	printf("O valor em real e:%f" ,VAL_REAL);
	
	
	
}
