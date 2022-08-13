#include <stdio.h>

      // O programa estava com "%c" e era para ser "%s"
      
main() {
	char nome[3][10];
	
	for(int i = 0; i < 3; i++) {
		printf("Digite um nome: ");
		scanf("%s", nome[i]);
	}
	
	for(int i = 0; i < 3; i++) {
		printf("\nNome: %s", nome[i]);
	}
}
