#include <stdio.h>
#include <stdlib.h>
/*Aula 22: Como utilizar  o operador long para um tipo primitivo Double */
int main(){
    long double x = 3.1415161718713;
    printf("O valor do pi falso é: %.6Lf\n",x); /*Só é possível imprimir o resultado se o L for maíusculo */
    /*No linux é tranquilo imprimir, mas o sistema Windows não suporta a impressão de um número desse tamanho.*/
    /*Para imprimir um número deste tamanho no Windows, é necessário utilizar a função __mingw_print()*/
    printf("O tamanho da variável long double x é: %d\n",sizeof(x));  

    return 0;
}