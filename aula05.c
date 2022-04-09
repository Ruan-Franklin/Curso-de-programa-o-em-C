#include <stdio.h>
#include <stdlib.h>
/*Aula 05: Lendo números reais (float e double) */


int main(){
    /*Padrão: tipo nome; */
    float numero = 3.1415;
    /*Para fazer uma formatação na hora de imprimir, é necessário colocar um "." após a porcentagem e antes da letra.*/
    printf("O valor do pi é: %.4f\n",numero);  
    printf("Digite um número real\n");
    scanf("%f",&numero);  /*Lendo o número */
    printf("O número digitado foi: %.3f\n ",numero);


    


    return 0;
}