#include <stdio.h>

main(){
	
	float r, pi=3.14159,R, area;
	
	printf("Digite o valor do raio do circulo: ");
	scanf("%f", &r);
	
	R = (r * r);
	area = (pi * R);
	
	printf("A area do do raio do circulo eh: %.3f", area);
	
}
