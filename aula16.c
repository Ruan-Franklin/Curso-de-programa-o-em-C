#include <stdio.h>
#include <stdlib.h>
/*Aula 16: Como o tamanho de memória de cada tipo de dado?  */
/*Operador sizeof
sizeof x ou sizeof(int)*/
int main(){
    /*Quando trabalharmos com ponteiros e aprendermos a alocação dinâmica de memória
    Nós usaremos o operador sizeof para obter o tamanho dos tipos que temos na LinguagemC
    O tamanho pode ser dos tipos primitivos ou dos tipos que aprenderemos a criar.*/
    float x = 1.0;
    /*Usa %d para o float também.*/
    printf("Tamanho de um float na memória: %d bytes\n",sizeof(x));
    printf("Tamanho em memória de um int: %d bytes\n",sizeof(int));
    /*1 byte = 8 bits. 8x4 = 32 bits. Um inteiro ocupa 32 bits  de memória.*/

    /*sizeof não é uma função, mas sim uma constante.*/

    return 0;
}