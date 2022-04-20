#include <stdio.h>
#include <stdlib.h>
/*Exercício 2: 2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela. */

/*Algoritmo:
int a, int b;
int a = 10;
int b = 20;
escreva("A = %d e B = %d")
int auxiliar = a;
int a = b;
int b = auxiliar
escreva("A = %d e B = %d ")
retorna 0  */

/*Programa: */
int main(){
    int a, b, aux;
    printf("Escreva os valores das variáveis que serão trocadas:\n");
    scanf("%d %d",&a,&b);
    printf("Você colocou a variável A valendo %d e a variável B valendo %d\n",a,b);
    aux=a;
    a=b;
    b=aux;
    printf("\t-------------  Trocando as variáveis  ------------------------\n");
    printf("As variáveis foram trocadas, A agora vale %d e B agora vale %d.\n",a,b);

}