#include <stdio.h>
#include <string.h>

		
int main (){


struct tipo_endereco{
		
		char rua[80];
		int  numero;
		char bairro[40];
		char cidade[40];
		char sigla_estado[2];
		char CEP[10];
		
	};
	
	struct ficha_pessoal{
		
		char nome[40];
		char email[50];
		char telefone[13];
		struct tipo_endereco endereco;
		
		
};
	struct ficha_pessoal ficha1;
	
	strcpy(ficha1.nome, "Philippe");
	strcpy(ficha1.email, "philippeuagutos2012@gmail.com");
	ficha1.endereco.numero = 135685321;
	strcpy(ficha1.endereco.cidade, "Bonito");
	
	

	return 0;
}
