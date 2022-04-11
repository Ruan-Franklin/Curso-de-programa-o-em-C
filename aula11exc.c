#include <stdio.h>
#include <stdlib.h>
/*Aula 11: | Exercício | Como ler sexo, idade, peso e altura do usuário? | aula 11 */
int main(){
    char sexo;
    int idade;
    float peso;
    float altura;
    printf("Digite a inicial do seu sexo.\n");
    scanf("%c",&sexo);
    printf("Digite a sua idade.\n");
    scanf("%d",&idade);
    printf("Digite o seu peso\n");
    scanf("%f",&peso);
    printf("Digite a sua altura.\n");
    scanf("%f",&altura);
    printf("A inicial do seu sexo é: %c, a sua idade você tem %d anos, seu peso é de %.2f kg e sua altura é de %.2f M.\n  ",sexo,idade,peso,altura);

    return 0;
}