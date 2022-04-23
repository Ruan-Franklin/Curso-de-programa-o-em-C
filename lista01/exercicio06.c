#include <stdio.h>
#include <stdlib.h>
/*Conversão de real para dólar */
int main(){
    float real, dolar, conversor, finalconversao;
    printf("Digite um valor em real que você quer converter para dólar\n");
    scanf("%f",&real);
    dolar=real/4.62;

    printf(" R$ %.2f equivalem a U$$ %.2f\n",real,dolar);
     return 0;
}