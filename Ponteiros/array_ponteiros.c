/*
#include <stdio.h>

int main(){
    int vet[5] = {0,1,2,3,4};
    
    int *p = vet;               //Recebe primeiro endereço
    
    printf("%d\n",p[4]);        //Ponteiro aponta pra posicao
    
    return 0;
    
}
*/ //Primeiro

//O nome do array é apenas um ponteiro que aponta para o primeiro elemento da array

#include <stdio.h>

int main(){
    int vet[5] = {0,1,2,3,4};
    
    int *p = vet;               //Recebe primeiro endereço
    
    printf("%d\n",*(p+1));        //Ponteiro aponta pra posicao  -- E equivalente ao p[i]
    printf("%d\n", p);
    
    return 0;
    
}