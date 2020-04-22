/* quociente_resto.ec
 * exemplo de utilizacao de ponteiros
 *
 * Autor: Charles Henrique Porto Ferreira
 * Data: 04/10/2016
 */
#include <stdio.h>


int quociente_resto(int x, int y, int* soma, int* produto) {
	if(y){
		*soma = x + y;             //Será atribuido o valor operação para a variavel que ponteiro aponta
		*produto = x*y;             //Será atribuido o valor da operação para a variavel que ponteiro aponta
		return 1;
	}else{
		return 0;
	}
	  
}


int main() {
	int x = 4;
	int y = 3;
	int s = 0;      //Será passado o endereço desta variavel
	int p = 0;      //Será passado o endereço desta variavel

	if(!quociente_resto(x,y,&s,&p))
		printf("%s\n","Não existe divisão por zero");
	else
		printf(" dividendo:%d\n divisor:%d\n quociente:%d\n resto:%d\n",x,y,s,p);
}