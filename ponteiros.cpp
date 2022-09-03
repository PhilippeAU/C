#include <stdio.h>

int main(){
	
	int a = 5;
	int *ptr_a = &a;
	
	float b = 10.5;
	float *ptr_b = &b;
	
	char c[10] = "Philippe";
	char *ptr_c = &c[10];
	
	printf("Primeiro valor de a: %d   \n", a);
	printf("Primeiro valor de b: %.2f \n", b);
	printf("Primeiro valor de c: %s   \n", c);
	
	*ptr_a = 6;
	*ptr_b = 11.5;
     ptr_c = "Augusto";
	
	printf("Segundo valor de a: %d   \n", *ptr_a);
	printf("Segundo valor de b: %.2f \n", *ptr_b);
	printf("Segundo valor de c: %s   \n",  ptr_c);
	
	
	
	return 0;
}
