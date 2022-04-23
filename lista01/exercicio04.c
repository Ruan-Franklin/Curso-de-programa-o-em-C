#include <stdio.h>
#include <stdlib.h>
/* Questão 4: escreva um programa que leia um valor de despesa de um restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente */

int main(){
    int pessoas;
    float gorjeta, conta, total, dividido;
    
    printf("Digite o número de pessoas que dividirão a conta:  \n");
    scanf("%d",&pessoas);
    printf("Digite a porcentagem da gorjeta a ser cobrada: \n");
    scanf("%f",&gorjeta);
    printf("Digite o valor da conta: \n");
    scanf("%f",&conta);
    /*Para descobrir quanto é por exemplo, 50% de um número, faz-se o seguinte: multiplica o número pela porcentagem e depois divide por 100*/
    gorjeta=(gorjeta*conta)/100;
    total = gorjeta+conta;
    dividido = total/pessoas;
    printf("O valor total a ser pago é de: R$ %.2f\n",total);
    printf("O valor que precisa ser dividido pelas %d pessoas é de: R$ %.2lf\n",pessoas,dividido);








    return 0;
}