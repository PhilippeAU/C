#include <stdio.h>

int main(){
	
	float S,x,y,z,p;
	
	printf("Digite o salario: ");
	scanf("%f", &S);
	
	if(S <= 1000){
		
		x = ((S * 20)/100);
		y = (x - S);
		
		printf("Novo salario: %f\nAumento: %f\nPorcentagem: 20%",x,y);
		
	}
	else{
		
		if(S <= 3000){
		
		x = ((S * 15)/100);
		y = (S - x);
		
		printf("Novo salario: %f\nAumento: %f\nPorcentagem: 15%",x,y);
	}
    else{
    	
    	if(S <= 8000){
		
		x = ((S * 10)/100);
		y = (x - S);
		
		printf("Novo salario: %f\nAumento: %f\nPorcentagem: 10%",x,y);
    		  	
	}
	else{
		
		if(S > 8000){
		
		x = ((S * 5)/100);
		y = (x - S);
		
		printf("Novo salario: %f\nAumento: %f\nPorcentagem: 5%",x,y);
	}
} 
}
}
}

