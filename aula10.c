#include <stdio.h>
#include <stdlib.h>
/*Aula 10:  Como ler vários valores do teclado utilizando scanf */
int main(){
    int num1, num2, num3;
    printf("Digite três números inteiros\n");
    scanf("%d %d %d",&num1,&num2,&num3); /*O que estiver nesses endereços será apagado, e no lugar será colocado o que for digitado pelo usuário */
    printf("Os números que você digitou foram: %d %d e %d\n",num1,num2,num3);

    return 0;

}