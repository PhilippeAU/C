#include <stdio.h>

int main(){
	
	int M,x=50,y,V;
	
	printf("Digite a quantidade de minutos: ");
	scanf("%d", &M);
	
	
	if (M <= 100){
		
		printf("Valor a pagar: R$%d", x);		
	}
	else{
	    
	    y = (M - 100);
	    y = (y*2);
	    V = (x + y);
	    
	   printf("Valor a pagar: R$%d",V);
	   
}
}




