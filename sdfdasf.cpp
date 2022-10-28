#include <stdio.h>
#include <stdlib.h>
float **Alocar_matriz_real(int m, int n){
float **v;
//Verifica se os parâmetros passados são válido
 if(m<1 || n < 1){
 printf("Parametro invalido");
return NULL;}
 //Aloca a matriz
v = (float**) calloc(m, sizeof(float *));

 if (v == NULL){
 printf("Memoria insuficiente");
 return NULL; }
for (int i = 0; i < m; i++) {
 v[i] = (float*) calloc(n, sizeof(float));
 if(v[i] == NULL){
printf("Memoria insuficiente");
 return NULL;}}
return v; //retorna o ponteiro para a matriz
}
