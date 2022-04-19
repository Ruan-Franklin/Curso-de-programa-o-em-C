#include <stdio.h>
#include <stdlib.h>
/*Aula 27: operador de decremento  --*/

int main(){
    //int contador = 10;
    int resultado,contador=10;

    /*Primeiro faz a atribuição, só depois que o valor do contador passa a ser 11*/
   // printf("Resultado: %d\n ",resultado);
   // printf("Contador atualizado: %d\n",contador);
    /*Com o -- á esquerda, o computador primeiro adiciona o número, para depois imprimí-lo*/
    /*Com o -- á direita, o computador primeiro imprime, depois adiciona o número*/
    
    printf("Valor atualizado: %d\n",--contador);
    
    return 0;
}