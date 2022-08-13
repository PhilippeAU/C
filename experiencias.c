#include <stdio.h>

int main(){

    char tipo;
    int N,i,cobaias,coelho,rato,sapo;
    float prato,psapo,pcoelho,total;

    printf("Quantos casos de teste serao digitados: ");
    scanf("%d", &N);

    coelho=0;
    rato=0;
    sapo=0;

    for(i=0;i<N;i++){

        printf("Quantidade de cobaias: ");
        scanf("%d", &cobaias);
        printf("Tipo de cobaias: ");
        scanf("%c", &tipo);

        if(tipo == 'C') {
 
            coelho = (coelho + cobaias);
        
        }
        else if(tipo == 'R'){

            rato = (rato + cobaias);
        }
        else {

            sapo = (sapo + cobaias);
        }
        
    }

    total = (coelho + rato + sapo);
    prato = ((rato * 100)/total);
    psapo = ((sapo * 100)/total);
    pcoelho = ((coelho * 100)/total);

    printf("RELATORIO FINAL:\nTotal: %fcobaias\nTotal de Coelhos: %d\nTotal de Sapos: %d\nTotal de Sapos: %d\nPercentual de Coelhos: %f\nPercentual de Ratos %f\nPercentual de Sapos: %f",total,coelho,sapo,coelho,pcoelho,prato,psapo);


    return 0;

}