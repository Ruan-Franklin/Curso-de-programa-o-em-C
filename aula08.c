#include <stdio.h>
#include <stdlib.h>
/*Aula 08:  Lendo caracteres com a função getc */
int main(){
    char letra;
    printf("Digite um caracter: \n");
    /*Neste momento, deve-se atribuir a variável letra á função getc. */
    /*stdin é entrada padrão do teclado */
    letra=getc(stdin); /*A função getc também pode ser utilizada para ler de outras fontes, de um arquivo texto, por exemplo.*/
    /*É necessário passar um parâmetro para a função getc o qual informa de onde deve ser feita a leitura.*/
    /*Imprimindo o caracter lido: */
    printf("O valor da variável letra é: %c\n",letra);


    return 0;
}