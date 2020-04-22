#include <stdio.h>
#include <stdlib.h>

int main(){
    //Alocar um espaço de memória para um vetor 
    int *v;                     //Ponteiro
    int size = 10;
    //int x = 2000;           //Valor de x
    //&x = 3;                 //Endreço de x é 3
    
    v = (int*)malloc(size*sizeof(int));     //v é um ponteiro e irá receber um endereço
    
    v[1] = 3;       //Recebe o valor 3 para a posição 1  - Equivalente a "*(v+1)"
    
    printf("Posicao 1 = %d \n",*(v+1));
    
    return 0;
}