#include <stdio.h>

int main(){
	
	float Fahrenheit,Celsius;
	char F,C,z;
	
	printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
	scanf("%c", &z);
	
	if (z == 'C'){
		
		printf("Digite a temperatura em Celsius: ");
		scanf("%f", &Celsius);
		
	    Fahrenheit = ((Celsius * 9.0 / 5.0) + 32.0);
	    
	    printf("Temperatura equivalente em Fahrenheit: %.2f", Fahrenheit);
	}
    else{
    	printf("Digite a temperatura em Fahrenheit: ");
	    scanf("%f", &Fahrenheit);
    	   	
    	Celsius = ((Fahrenheit-32) * 5/9);   	
    	
    	printf("Temperatura equivalente em Celsius: %.2f", Celsius);
    	
    	
	} 
    
	

}
