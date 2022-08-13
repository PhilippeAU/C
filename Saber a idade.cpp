#include <stdio.h>

main(){
	
	int AA, AN,idade;
	
	printf("Digite o ano atual:\n");
	scanf("%d", &AA);
	printf("Digite o ano que voce nasceu:\n");
	scanf("%d", &AN);
	
	idade = AA - AN;
	
	printf("A sua idade e:%d",idade);
	
	
	
}
