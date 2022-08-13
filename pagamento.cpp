#include <stdio.h>

int main(){
	
	char nomes[50];
	float VH,HT,pagamento;
	
	printf("Nome do trabalhador \n");
	gets(nomes);
	printf("Digite quanto ganha pro hora: \n");
	scanf("%f", &VH);
	printf("Digite quantas horas trabalhadas: \n");
	scanf("%f", &HT);
	
	pagamento = (VH * HT);
	
	printf("O pagamento para %s deve ser: %f",nomes,pagamento);
	
	
	
}
