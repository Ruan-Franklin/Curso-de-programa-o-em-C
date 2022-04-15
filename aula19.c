#include <stdio.h>
#include <stdlib.h>
/*Aula 19: como aumentar um espaço de memória para o int com o operador long */
int main(){
    /*O long int torna o inteiro maior */
    /*O long long int ocupa 8 bytes de memória */
    long long int x = 2147483647;  /*Este é o maior número positivo que pode ser armazenado em um número inteiro */
    printf("Tamanho do long int: %d bytes\n",sizeof(x));
    printf("O valor do número inteiro é: %lld\n",x);
    x++;
    printf("O valor do número inteiro é:%lld\n",x);
    return 0;
}