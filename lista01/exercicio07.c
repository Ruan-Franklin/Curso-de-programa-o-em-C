#include <stdio.h>
#include <stdlib.h>
int main(){
    int segundos,horas,minuto, s, resto;
    printf("Digite a quantidade de segundos\n");
    scanf("%d",&segundos);
    /*É necessário dividir o valor lido pela quantidade de segundos que temos em 1 hora */
    horas=segundos/3600;
    resto=segundos%3600;
    minuto=resto/60;
    s=resto%60;
    


    printf("%d em segundos representa o seguinte horário: %d:%d:%d\n",segundos,horas,minuto,s);

    return 0;
}