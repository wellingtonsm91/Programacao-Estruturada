/*A somatória dos números inteiros de 1 até n pode ser
definida como:
S(n) = 1, se n==1
 n + S(n-1), se n>1
Crie um algoritmo recursivo para calcular a somatória e
uma versão caudal para esse algoritmo.


#include <stdio.h>

//Somatorio não caudal
int S(int n){                   //Somatoria do numeros inteiros até este

    if (n==1) return 1;         //Somatorio só pode ser 1
    if (n>1) return n + S(n-1);
    
}
//Somatorio caudal


int main(void){
    int n;
    int resultado;
    
    printf("Entre com o valor do inteiro: \n");
    scanf("%d",&n);
    
    resultado = S(n);
    printf("%d \n",resultado);
    
}

*/ //Meu programa

//Programa do professor
#include <stdio.h>

int somatoria(int n)
{
    if (n==1) return 1;
    return n + somatoria(n-1);
}

int somatoriaTR(int n, int soma)
{
    if (n==1) return soma+1;                        //Soma sempre começa com zero
    return somatoriaTR(n-1, soma+n);
}

int main ( )
{
    int n;

    printf("Entre com valor de n: ");
    scanf("%d", &n);

    printf("Sem cauda: %d\n", somatoria(n));
    printf("Com cauda: %d\n", somatoriaTR(n,0));

    return 0;
}