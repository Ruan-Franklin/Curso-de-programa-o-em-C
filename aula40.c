#include <stdio.h>
#include <stdlib.h>
/*Aula 40: estrutura de decisão - verificando se um número é negativo */
int main(){
    int a=10;
    /*
    Se (a<0) então => if
      retorna verdadeiro 
    se não, então
      retorna falso  => else
    */
    printf("Digite um valor inteiro qualquer: \n");
    scanf("%d",&a);
    if(a<0){
        printf("Valor negativo\n");
    }
    else{
        printf("O valor digitado é positivo ou igual a 0.\n");
    }
    printf("Continuação do programa\n");
    return 0;
}