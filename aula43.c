#include <stdio.h>
#include <stdlib.h>
/*Aula 43: o operador ternário na Linguagem c 
Condição "?" verdadeiro ou falso.*/
/* "?" = se e  faça. ":" = se não, faça */
int main(){
    int a=10;
    printf("Digite um número qualquer\n");
    scanf("%d",&a);
    printf("Operador ternário:\n");
    a<0 ? printf("O número digitado é negativo\n") : printf("O número digitado é positivo ou igual a zero.\n"); 

    return 0;
}