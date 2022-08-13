#include <stdio.h>

int main(){

    int N,i,MA=0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char genero[N];
    double altura[N],MEaltura=0,MAaltura=0,FE=0,a=0,b=0,altumulher=0,media;

    for(i=0; i<N; i++){

        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &altura[i]);
        printf("Nome da %da pessoas: ", i + 1);
        scanf("%s", &genero[i]);

    }
    for(i=0; i<N; i++){

        if(genero[i] == 'M'){

            MA++;     
        }
        else{

            FE++;
            altumulher = (altumulher + altura[i]); 

        }
        
    }

    MAaltura = altura[0];
    MEaltura = altura[0];

    for(i=1; i<N; i++){

        if(altura[i] > MAaltura){
        MAaltura = altura[i];
        
        }
       else if(altura[i] < MEaltura){
        MEaltura = altura[i];
   }
  }

    media = (altumulher / FE);

    printf("Maior altura: %.2lf\n", MAaltura);
    printf("Menor altura: %.2lf\n", MEaltura);
    printf("Media das alturas das mulheres: %.2lf\n", media);
    printf("Numero de homens: %.1d", MA);
    
}