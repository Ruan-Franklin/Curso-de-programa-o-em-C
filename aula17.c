#include <stdio.h>
#include <stdlib.h>
/*Aula 17: Operador short para o tipo int  */
/*Intervalo: -32.768 até 32.767 */
/*Hi ou %d */

int main(){
    /*Uma variável do tipo inteira ocupa 4 bytes de memória. */
    /*Para economizar memória, basta adicionar "short" na frente. */
   /* short int x = 32767;/*
/*   printf("Tamanho da variável inteira com short em bytes: %d\n",sizeof(x));  /*Short tem o tamanho de 2 bytes. */
    short int x = 32767;
    printf("Valor da variável x: %d\n",x);
    x++;
    printf("Tamanho em memória de short: %d\n",x);
    /*O valor que aparecerá na tela será negativo pelo fato de que todos os 16 bits que o tipo short suporta estão em uso.*/
    /*O bit mais significativo (esquerda) é usado para o sinal. Se o valor for 0, o número é positivo. Se for 0, é negativo. */
    /*O famoso overflow/estouro de memória */
    
    return 0;


}