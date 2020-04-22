/*
// arrays in C are not assignable:

// Criar um struct e usar seus elementos

#include<stdio.h>
#include<string.h> 

typedef struct pessoa{                                              //Pode ser usada em qualquer parte do programa 
    int idade;
    char nome[50];
    char profissao[50];
};

int main (){
    struct pessoa p;
    
    p.idade = 25;
    //p.nome = "wellington";                        //não é possivel
    strcpy(p.nome,"Wellington");
    
    printf("%d\n",p.idade);
    printf("%s\n",p.nome);
    //printf("%s\n",p.profissao);
    
return 0;
}
fim do primmeiro programa*/ 

// Outra forma mais eficiente do programa acima
#include<stdio.h>
#include<string.h> 

typedef struct pessoa{                                              //Pode ser usada em qualquer parte do programa 
    int idade;
    char nome[50];
    char profissao[50];
};

int main (){
    struct pessoa p = {25,"Wellington","Engenheiro"};                           //Só vale na declaração

    printf("%d\n",p.idade);
    printf("%s\n",p.nome);
    printf("%s\n",p.profissao);
    
return 0;
}
