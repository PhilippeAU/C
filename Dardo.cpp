#include <stdio.h>

int main(){
	
	float A,B,C;
	
	printf("Digite as tres distancias: \n");
	scanf("%f%f%f", &A, &B, &C);
	
	if (A > B && A > C){
		
		printf("Maior distancia: %f", A); 
		
	}
	else{
		
		if (B > C){
			
			printf("Maior distancia: %f", B);
			
		}
		
	
    else{
    	
    	printf("Maior distancia: %f", C);
	}
    

}

}

