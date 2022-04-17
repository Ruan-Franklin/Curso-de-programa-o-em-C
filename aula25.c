#include <stdio.h>
#include <stdlib.h>
/*Aula 25: O que significa casting ou conversão de tipos na Linguagem c? */
int main(){
    int a = 10, b = 20;
    /*Para converter uma variável, abre um par de parênteses antes dela e escreve o tipo que quer que seja convertido */
    printf("Soma: %d\n",a+b);
    printf("Subtração: %d\n",a-b);
    printf("Multiplicação: %d\n",a*b);
    printf("Divisão: %f\n",a/(float)b);
    /*Na divisão, o a foi convertido para float */

        return 0;
}