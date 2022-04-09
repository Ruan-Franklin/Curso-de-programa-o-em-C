#include <stdio.h>
#include <stdlib.h>
/*Aula 05: Lendo caracteres. */


int main(){
    /*Padrão: tipo nome; */
    char genero = 'm';
    /*A imprensão de um tipo caracter é dada por %c */
    printf("Valor da variável gênero: %c \n",genero);
    printf("Digite seu gênero. F para feminino, M para masculino.\n");
    scanf("%c",&genero);
    printf("O gênero que você digitou foi: %c\n",genero);



    


    return 0;
}