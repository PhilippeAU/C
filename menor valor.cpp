#include <stdio.h>

int main(){
	
	int PV,SV,TV,M,x;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &PV);
	printf("Digite o segundo valor: ");
	scanf("%d", &SV);
	printf("Digite o terceiro valor: ");
	scanf("%d", &TV);
	
	if (PV < SV && PV < TV){
		
		printf("O menor valor eh: %d",PV);	
	}
	else{
	
	    if (SV < TV){
	    	
	    	printf("O menor valor eh: %d",SV);
	    	
	    	
	    	}else {
			
		
		       printf("O menor valor eh: %d",TV);}
	    	
	}
}
	
		



