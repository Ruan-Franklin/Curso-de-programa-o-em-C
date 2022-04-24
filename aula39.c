#include <stdio.h>
#include <stdlib.h>
/*Aula 39: Decisão simples - verificando se um número é negativo.
Brasília é a capital do Brasil? */
int main(){
    int a= 10;
    printf("Digite um valor inteiro qualquer. \n");
    scanf("%d",&a);
    if(a<0) /*if = se */{
        printf("Valor negativo.\n");
    }
    printf("Continuação do programa\n");
    
    return 0;
}