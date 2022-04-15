#include <stdio.h>
#include <stdlib.h>
/*Aula 20: Qual é o tamanho da memória de um float. */
/*%f*/
int main(){
    float x = 3.1415;
    printf("Um float precisa de %d bytes de memória\n",sizeof(float));
    /*Um float ocupa a mesma quantidade de memória de um número inteiro */
    return 0;
}