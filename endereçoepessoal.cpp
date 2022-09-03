#include <stdio.h>

int main (void){
	
	
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
		char endereco[80];
	};
	
	struct tipo_endereco endereco;
	struct ficha_pessoal pessoal;
	
	printf("\n------------ Endereco ------------\n\n\n");
	
	printf("Qual sua rua?  ");
	fgets(endereco.rua,80,stdin);
	
	printf("Qual o numero da sua residencia?  ");
	scanf("%d", &endereco.numero);
	
	printf("Qual e o seu bairro?  ");
	scanf("%s", &endereco.bairro);
	
	printf("Qual e a sua cidade?  ");
	scanf("%s", &endereco.cidade);
	
	printf("Qual a sigla do seu estado?  ");
	scanf("%s", &endereco.sigla_estado);
	
	printf("Qual e o seu CEP? ");
	scanf("%s", &endereco.CEP);
	
	
	printf("\n------------ Ficha pessoal ------------\n\n\n");
	
	printf("Qual o seu nome?  ");
	scanf("%s", &pessoal.nome);
	
	printf("Qual e o seu email?  ");
	scanf("%s", &pessoal.email);
	
	printf("Qual e o seu telefone?  ");
	scanf("%s", &pessoal.telefone);
	
	printf("Qual e o seu endereco?  ");
	scanf("%s", &pessoal.endereco);
	
	
	printf("\n------------ Dados do seu endereco ------------\n\n\n");
	
	printf("Rua ................: %s"   , endereco.rua);
	printf("Numero .............: %d \n", endereco.numero);
	printf("Bairro .............: %s \n", endereco.bairro);
	printf("Cidade .............: %s \n", endereco.cidade);
	printf("Estado .............: %s \n", endereco.sigla_estado);
	printf("CEP ................: %s \n", endereco.CEP);
	
	printf("\n------------ Sua Ficha pessoal ------------\n\n\n");
	
	printf("Nome ...............: %s \n"  , pessoal.nome);
	printf("email ..............: %s \n", pessoal.email);
	printf("Telefone ...........: %s \n", pessoal.telefone);
	printf("endereco ...........: %s \n", pessoal.endereco);

	
	
	
	return 0;
}
