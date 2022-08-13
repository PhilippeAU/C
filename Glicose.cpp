#include <stdio.h>

int main(){
	
	float G;
	
	printf("Digite o medida da glicose: ");
	scanf("%f", &G);
	

    if(G <= 100){
    	
    	printf("Classificacao: Normal");
    	
	}
	else{
		
		if (G <= 140){
			
		printf("Classificacao: Elevada");
		
	}
	else {
		
		printf("Claassificacao: Diabetes");
	}
			
	}
	
	
	
	
}
