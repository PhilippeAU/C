#include <stdio.h>

main(){
	
	float PN,SN,NT;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &PN);
	printf("Digite a segunda nota: ");
	scanf("%f", &SN);
	
	NT = (PN+SN);
	
	printf("Nota final do aluno: %.1f\n", NT);
	
	if (NT<60){
		printf("REPROVADO");	
	}
}
