/* Primeiro Programa
Top-Down ou memorização: cria uma tabela global em
que as soluções parciais são armazenadas. Antes de
realizar uma nova chamada recursiva a tabela é
consultada.

// if (Fib[n]) return Fib[n];   -- qualquer numero diferente de zero faz retornar o valor da tabela


#include <stdio.h>

#define MAX_N 100

int Fib[MAX_N] = {0}; // isso é uma variável global - Todos o Fib começam com 0;

int Fibonacci (int n)
{
 if (n < 2) return n;                                                           //retorna 1 ou zero
 if (Fib[n]) return Fib[n];                                                     //Tabela global com soluções parciais
 Fib[n] = Fibonacci(n-1) + Fibonacci(n-2);                                      //Chamada recursiva para a tabela dinamica
 return Fib[n];
}

int main(){
 int n = 10;
 int resultado;
 
 resultado = Fibonacci (n);
 printf("%d\n",resultado);
 
 return 0;
}

*/ //programa feito pelo Professor

//****Meu programa****

#include<stdio.h>

int memo[1000] = {0};                           //Variavel global, todos os valores começam com zero - tamanho maximo de n

int fibo(int n){
    int f;
    if (memo[n]==1) return memo[n];
    if (n<=2) f = 1;                             //Para casos de n igual a 1 ou 0  fim da árvore;
    else  f = fibo(n-1)+fibo(n-2);
    
    memo[n] = f;
    
    return f;

}

int main(){
    int n = 5;
    int resultado;
 
    resultado = fibo(n);
    printf("O valor de fibonacci é %d\n",resultado);
 
 return 0;
}
