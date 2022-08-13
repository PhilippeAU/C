#include <stdio.h>
#include <math.h>

int main(){
	
	float X1,X2,a,b,c,D;
	
	printf("Digite o coeficiente de a: ");
	scanf("%f", &a);
	printf("Digite o coeficiente de b: ");
	scanf("%f", &b);
	printf("Digite o coeficiente de c: ");
	scanf("%f", &c);
	
	D = (b * b) - (4 * a * c);

    if (a == 0 || D < 0)
    {
        printf("Esta equacao nao possui raizes reais\n");
    }
    else
    {
        X1 = ((-b) + sqrt(D)) / (2 * a);
        X2 = ((-b) - sqrt(D)) / (2 * a);

        printf("X1 = %.4lf\n", X1);
        printf("X2 = %.4lf\n", X2);
    }


}

