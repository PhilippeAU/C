#include <stdio.h>

int main(){
	
	float PU,QC,D,x,y,z,troco;
	 
	printf("Digite o pre�o unit�rio do produto: ");
	scanf("%f", &PU);
	printf("Digite a quantidade comprada: ");
	scanf("%f", &QC);
	printf("Digite o dinheiro recebido: ");
	scanf("%f", &D);
	
    x = (PU * QC);
    
    
    if (D < x){
    
        z = (x - D);
    	printf("Dinheiro insuficiente Falta: R$%2.f", z);	
	}
    else{
    	
    	troco = (D - x);
    	
    	printf("Troico: R$%2.f", troco);
	}
}







