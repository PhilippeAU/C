#include <stdio.h>

int main(){
	
	int x,y,r;
	
	printf("Digite dois numeros inteiros:\n");
	scanf("%d%d", &x,&y);
	
	if(x % y == 0){
		
		printf("%d e %d sao multiplos", x,y);
		
	}
    else{
    	
    	printf("%d e %d nao sao multiplos", x,y);
    	
	}

}
