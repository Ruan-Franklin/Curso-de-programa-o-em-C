#include <stdio.h>
#include <stdlib.h>
/*Auça 47: Operador lógico e (&)
         TABELA VERDADE: A  |  B  | A & B
                         V  |  V  |  V
                         V  | F   | F
                         F  | V   | F
                         F  | F  | F

O operador lógico e só aceita verdadeiro quandos todos os elementos envolvidos são verdadeiros.

*/
int main(){
    int idade;
    char sexo;
    printf("Digite sua idade.");
    scanf("%d",&idade);
    printf("Digite o seu sexo (m ou f ):\n");
    scanf(" %c",&sexo);
    if(idade<18 || sexo=='f'){
        printf("Você não precisa se alistar.\n");
        }
    
    else{
        printf("Você deve se alistar\n");
        if(idade>18){
            printf("O seu tempo de alistamento já passou, procure uma junta militar\n.");
    }



    return 0;

}
}
