#include <stdio.h>
#include <stdlib.h>
/*Aula 18: Resultado negativo na soma de dois números inteiros positivos */
int main(){
    int x = 2147483647;  /*Este é o maior número positivo que pode ser armazenado em um número inteiro */
    printf("O valor do número inteiro é: %d\n",x);
    x++;
    printf("O valor do número inteiro é:%d\n",x);

    return 0;
}