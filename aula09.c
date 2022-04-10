#include <stdio.h>
#include <stdlib.h>

/*Aula 09: Lendo caracteres com a função fgetc. */
int main(){
    char letra;
    printf("Digite um caracter: \n");
    /*fgetc é uma função específica para leitura de arquivo, então é necessário passar o nome de um arquivo como parâmetro.*/
    /*É possível falar que vai ler da entrada padrão do computador (stdin).*/
    letra=fgetc(stdin);
    printf("O caracter lido foi: %c\n",letra);



    return 0;
}