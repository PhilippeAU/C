#include <stdio.h>

int main(){
	
	int X,Y;
	
	printf("Digite os valores das coordenadas X e Y: \n");
	scanf("%d %d",X,Y);
	
	while(X && Y !=  0);
	    
	    if(X > 0 && Y > 0){
	    	
	    	printf("QUADRANTE Q1");
	   }
	   else if(X < 0 && Y > 0){
	   	
	   	    printf("QUADRANTE Q2");   
	   }
	   else if(X < 0 && Y < 0){
	   	
	   	    printf("QUADRANTE Q3");
	   }
	   else{
	   	
	   	    printf("QUADRANTE Q4");
	   }
	   
	   printf("Digite os valores das coordenadas X e Y: \n");
	   scanf("%d %d", X,Y);
	   
	   return 0;
}
