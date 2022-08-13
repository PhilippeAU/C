#include <stdio.h>

int main(){

    int alcool,gasolina,dissel,X;

    printf("Informe um codigo (1,2,3) ou 4 para parar: ");
    scanf("%d", &X);


    alcool = 0;
    gasolina = 0;
    dissel = 0;

    while(X != 4){

       if(X == 1){

           alcool++;
       }      
       else if(X == 2){

           gasolina++;
       }
       else if(X == 3){

            dissel++;
       }
     
     
       printf("Informe um codigo (1,2,3) ou 4 para parar: ");
       scanf("%d", &X);
    
    }
    printf("MUITO OBRIGADO!!\nAlcool: %d\ngasolina: %d\nDissel: %d", alcool,gasolina,dissel);

    return 0;

}