#include <stdio.h>
#include <stdlib.h>
/*Exercício 03: 3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar. */
int main(){
    int a, b;
    printf("Digite dois números inteiros para serem trocados.\n");
    scanf("%d %d",&a,&b);
    printf("Os valores lidos de a e b foram: %d e %d.\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Os números são:  %d %d\n",a,b);
    return 0;

}