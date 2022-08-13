#include <stdio.h>

int main(){

    int N,Y;

    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%d", &N);

    
    for(N>=0;N<=10;Y++){
    
    printf("%d x %d = %d\n" ,N,Y,N*Y);
    

    }
}