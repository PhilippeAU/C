#include <stdio.h>

main(){
	
	float A,B,C,AQ,AT,AZ;

   printf("Digite a medida de A: ");
   scanf("%f", &A);	
   printf("Digite a medida de B: ");
   scanf("%f", &B);
   printf("Digite a medida de C: ");
   scanf("%f", &C);
   
   AQ = (A * A);
   AT = ((A * B)/2);
   AZ = (((A + B)*C)/2);
   
   printf("A area do quadrado: %.4f\n",AQ);
   printf("A area do triangulo: %.4f\n",AT);
   printf("A area do trapezio: %.4f\n",AZ);
   
}
