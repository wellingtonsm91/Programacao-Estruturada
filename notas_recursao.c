***Conceitos da função recursiva****
Uma função recursiva é uma função que chama a si mesma, e quase
todas as construções em Haskell são recursivas, pois necessitam de algum tipo
de repetição. Praticamente em toda a função recursiva existe o conceito de
aterramento (condição de parada), o qual deve sempre vir antes da linha que
faz a chamada recursiva geral. Caso se inverta a sequência dessas linhas, uma
sequência infinita de chamadas vai efetivamente ocorrer, se os critérios de
parada não estiverem bem definidos. Uma função bem definida é aquela que
possui um número de passos finitos, em que seus n aterramentos sempre se
encontram antes da função recursiva geral.

**recursão com cauda**
Recursão de Cauda
A recursão de cauda é um tipo especial de recursão, no qual não existe
processamento a ser feito depois de encerrada a chamada recursiva. Sendo
assim, não é necessário guardar o estado do processamento no momento da
chamada recursiva. Um compilador ou interpretador pode (se for construído
assim) detectar a ocorrência de recursão de cauda e gerar código em que a
chamada recursiva é implementada como um mero desvio do fluxo de
instruções

*****Busca binaria*****
A ideia da busca binaria é encontrar um elemento dentro de um vetor ordenado.
Passos:
iniciar comparando com a metade do tamanho do vetor ( n/2)