#include <stdio.h>

int main(){

    int n1,n2;

    printf("Digite o primeiro numero inteiro? ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro? ");
    scanf("%d", &n2);

    if(n1 < n2){
        printf("O menor eh %d" ,n1);
    
    }else{
        printf("O menor eh %d" ,n2);
    }
    
}