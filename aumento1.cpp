#include <stdio.h>

int main(){
	
	float S,x,y,z,p;
	
	printf("Digite o salario: ");
	scanf("%f", &S);
	
	if(S <= 1000){
		
		x = ((S * 20)/100);
		y = (x + S);
		
		printf("Novo salario: %.2f\nAumento: %.2f\nPorcentagem: 20%",y,x);
		
	}
	else{
		
		if(S <= 3000){
		
		x = ((S * 15)/100);
		y = (S + x);
		
		printf("Novo salario: %.2f\nAumento: %.2f\nPorcentagem: 15%",y,x);
	}
    else{
    	
    	if(S <= 8000){
		
		x = ((S * 10)/100);
		y = (x + S);
		
		printf("Novo salario: %.2f\nAumento: %.2f\nPorcentagem: 10%",y,x);
    		  	
	}
	else{
		
		if(S > 8000){
		
		x = ((S * 5)/100);
		y = (x + S);
		
		printf("Novo salario: %.2f\nAumento: %.2f\nPorcentagem: 5%",y,x);
	}
} 
}
}
}
