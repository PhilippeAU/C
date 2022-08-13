#include <stdio.h>

int main(){

    int Z,X,C,V,B,N,SOMA;

    printf("Digite um numero inteiro: ");
    scanf("%d", &X);

    while(X != 0){
      if(X % 2 == 0){
        Z = (X + 2);
        C = (Z + 2);
        V = (C + 2);
        B = (V + 2);
        
        SOMA = (X + Z + C + V + B);
      }
      else{

        Z = (X + 1);
        C = (Z + 2);
        V = (C + 2);
        B = (V + 2);
        N = (B + 2);
        
        SOMA = (Z + C + V + B + N);


      } 
         printf("SOMA = %d\n",SOMA);
     
        printf("Digite um numero inteiro: ");
        scanf("%d", &X);


    }
    

}