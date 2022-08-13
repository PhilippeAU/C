#include <stdio.h>

main(){
	
	float QTD=1, AT, LT,x, AP, LP,y,z;
	
	printf("Digite a altura do tijolo:\n");
	scanf("%f", &AT);
	printf("Digite a largura do tijolo:\n");
	scanf("%f", &LT);

	printf("Digite a altura da parede:\n");
	scanf("%f", &AP);
	printf("Digite a largura da parede\n");
	scanf("%f", &LP);
	
	QTD = (AT * LT);
	y = ((AP * LP)*100);
	
	while(QTD < y){	
	QTD = QTD + 1;	}
	
	printf("A quantidade de tijolos e:%f", QTD);

}
