#include <stdio.h>
#include <stdlib.h>

/*Aula 07: Leitura de caracteres usando a função getchar */
int main(){
    char letra;
    /*A variável fica antes do getchar, ela recebe o getchar*/
    letra=getchar(); /*Dentro do parênteses não coloca nenhum parâmetro. */  
    printf("Caracter lido: %c\n",letra);


    return 0;
}