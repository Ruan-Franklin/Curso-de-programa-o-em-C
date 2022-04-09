#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Nós precisamos armazenar um pedaço da memória para guardar um número. */
    int valor; //Criei uma variável para guardar um valor do tipo inteiro.
    valor = 50;  //Atribuição -> Atribuir um determinado valor a uma variável.
    int n;
    printf("Digite um valor inteiro: \n");
    scanf("%d",&n);
    printf("Valor da variável: %d\n",valor);


    return 0;
}