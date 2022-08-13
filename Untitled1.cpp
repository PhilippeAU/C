#include<stdio.h>

main() {
	// declaração de uma variável inteira, chamada a
	int a;
	
	printf("Digite um nimero: ");
	
	scanf("%d", &a);
	
	if(a % 2 == 1) {
		 printf(" %d e impar", a);
	} else {
		printf("%d e par", a);
	
	}
	
}
