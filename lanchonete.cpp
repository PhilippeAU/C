#include <stdio.h>

int main(){
	
	float C,c,S;
	
	printf("Digite o codigo do produto comprado: ");
	scanf("%f", &C);
	
	if(C == 1){
		
		printf("Digite a quantidade comprada: ");
		scanf("%f", &c);
		
		S = (c * 5);
		
		printf("Valor a pagar: %.2f",S);
	}
	else{
		 
		if(C == 2){
		
		printf("Digite a quantidade comprada: ");
		scanf("%f", &c);
		
		S = (c * 3.50);
		
		printf("Valor a pagar: %.2f",S);
	
	}else{
		
		if(C == 3){
		
		printf("Digite a quantidade comprada: ");
		scanf("%f", &c);
		
		S = (c * 4.80);
		
		printf("Valor a pagar: %.2f",S);
	}
   else{
	
	    if(C == 4){
		
		printf("Digite a quantidade comprada: ");
		scanf("%f", &c);
		
		S = (c * 8.90);
		
		printf("Valor a pagar: %.2f",S);
		}
       else{


       if(C == 5){
		
		printf("Digite a quantidade comprada: ");
		scanf("%f", &c);
		
		S = (c * 7.32);
		
		printf("Valor a pagar: %.2f",S); 
	}
}
}
}
}
}
