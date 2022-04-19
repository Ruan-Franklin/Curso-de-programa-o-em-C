#include <stdio.h>
#include <stdlib.h>
/*Aula 29: "O que é o operador unsigned int [número sem sinal]"*/
/*Operador unsigned int
trocar o %d por %u
limite para o tipo int: 2.147.483.647 */

int main(){
    //Unsigned desconsidera a parte negativa do número.
    unsigned int x = 2147483647; // o tipo inteiro tem um intervalo positivo e um negativo.
    printf("Resultado com incremento: %u\n",++x);
    int y = x+2;
    printf("Y: %u\n",y);

    //Todos os tipos podem usar unsigned int.

    return 0;
}