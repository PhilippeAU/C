#include <stdio.h>
#include <stdlib.h>

//Usando typedef na struct para encurtar o comando na declara��o
typedef struct{
	
	int matricula;
	float nota;
}tAluno;

int main (void){
	
	//a1 � uma struct do tipo tAluno
	tAluno a1;
	
	//ptrAluno � um ponteiro do tipo tAluno que
	//Recebe o endere�o de a1, para receber o enrede�o usa o '&'
	tAluno *ptrAluno = &a1;
	
	a1.matricula=555;
	a1.nota= 8.0;
	
	//Exibindo dados usando a struct diretamente usando '.'
	printf("Matricula: %d \nNota %.2f\n", a1.matricula,a1.nota);
	
	//OUTRA MANEIRA DE FAZER
	
	//Podemos atribuir ou acessar um valor usando o ponteiro (*ptrAluno)
	(*ptrAluno).nota = 8.5;
	printf("Matricula: %d \nNota %.2f\n",(*ptrAluno).matricula,(*ptrAluno).nota);
	
	//ptrAluno-> substitui a nota��o (*ptrAluno). de forma mais intuitiva
	//Atribuindo um novo valor para a nota usando o ptrAluno->
	
	ptrAluno->nota = 9.0;
	
	//Portando (*ptrAluno).nota � o mesmo que usar ptrAluno->nota
	
	printf("Matricula: %d \nNota %.2f\n", ptrAluno->matricula, ptrAluno->nota);
	
	system("pause");//parada de tela
	return 0;
	
}
