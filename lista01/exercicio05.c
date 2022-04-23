#include <stdio.h>
#include <stdlib.h>
/* Exercício 5:
Uma empresa contrata um encanador a R$ 45,00 por dia. 
Faça um programa que solicite
 o número de dias trabalhados pelo encanador e
  imprima a quantia líquida que deverá ser paga.
   sabendo que são descontados 8% para imposto de renda.*/
int main(){
    int dias;
    float valor = 45.00;
    printf("Digite a quantidade de dias que o funcionário vai trabalhar\n");
    scanf("%d",&dias);
    float contrato = dias*valor;
    float imposto=contrato*8/100;
    float desconto = contrato-imposto;
    printf("Em %d dia(s), o funcionário vai receber o valor de: R$ %.2f\n",dias,contrato);
    printf("O valor do imposto calculado foi de: %.2f\n",imposto);
    printf("Com  o imposto de renda, o valor a ser recebido pelo funcionário é de: R$ %.2f\n",desconto);



    return 0;
}