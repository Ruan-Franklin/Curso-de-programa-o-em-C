#include <stdio.h>
#include <stdlib.h>
/*Aula 41: Verdadeiro e falso na linguagem C */
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
    printf("Resultado lógico: %d \n",a<0); /*O 0 em linguagem significa falso e qualquer valor diferente de 0 significa verdadeiro.*/
    if(a<0){
        printf("Valor negativo\n");
    }
    else{
        printf("O valor digitado é positivo ou igual a 0.\n");
    }
    printf("Continuação do programa\n");
    return 0;
}