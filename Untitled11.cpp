#include <stdio.h>

main(){
	//Programa mostra a média entre duas notas.
	int x,z,r;
	printf("Digite a primeira nota:");
	scanf("%d", &x);
	
	printf("Digite a segunda nota: ");
	scanf("%d",&z);
	
	r=((x+z)/2);
	printf("A media das notas %d e %d: %d",x,z,r);
	
	
	
}
