#include <stdio.h>
#include <stdlib.h>
/*Aula 48: Operador lógico || (ou) em linguagem c. */
int main(){
    int idade;
    printf("Digite a sua idade:\n");
    scanf("%d",&idade);
    if(idade<=5 || idade>=60){
        printf("Você tem direito a gratuidade no transporte!\n");
    }
    else{
        printf("A sua idade não é compatível com as regras de gratuidade no transporte\n.");
    }
    return 0;
}