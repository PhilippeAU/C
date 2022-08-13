#include <stdio.h>

main(){
	
	int N,T;
	
	printf("Digite o numero que quer multiplicar:");
	scanf("%d", &N);
	
	for(T=0;T<=10;T++){
		
	printf("%d x %d = %d\n", T,N,N*T);
		
	}	
	
}
