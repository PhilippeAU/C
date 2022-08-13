#include <stdio.h>

int main(){
     
    float idade,z,y=0,soma=0,media=0;
    
    printf("Digite as idades:\n");
    scanf("%f", &idade);
    
    if(idade < 0){
    	
		printf("IMPOSSIVEL CALCULAR");
}
    else{

    	while(idade >= 0){	
	    soma = soma + idade;
	    y++;
	    scanf("%f", &idade);
	       
}
        media = (soma / y);
        
        printf("MEDIA: %.2f", media);
}
	

}
