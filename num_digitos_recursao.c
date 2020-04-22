/*
A quantidade de dígitos de um número é definida por:
D(x) = 1, se x<10
 1 + D(x/10), caso contrário
Crie um algoritmo recursivo e uma versão caudal para
esse algoritmo.

*/
#include <stdio.h>

//Somatorio não caudal
int D(int x){                   //

    if (x<10) return 1;         //Somatorio só pode ser 1 - Condicao de parada
    return 1 + D(x/10);
    
}
//Somatorio caudal  - nao ocorre a soma na chamda recursiva
int Dcad(int x, int d){                   //

    if (x<10) return d+1;         //Somatorio só pode ser 1 - Condicao de parada
    return Dcad(x/10,d+1);
    
}

int main(void){
    int x =100000000;
    
    //printf("Entre com o valor do inteiro: \n");
    //scanf("%d",&x);
    
    printf("Numero de digitos eh: %d \n",D(x));
    printf("Numero de digitos caudal eh: %d \n",Dcad(x,0));
   
 return 0; 
}
