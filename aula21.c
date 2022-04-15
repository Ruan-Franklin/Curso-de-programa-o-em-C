#include <stdio.h>
#include <stdlib.h>
/*Aula 21: o tipo primitivo double para números reais com precisão dupla */
int main(){
    float x = 3.14;
    /*O double geralmente é usado em casos de números científicos */
    double y = 3.141592653589793;
    printf("Um double ocupa %d bytes de memória.\n",sizeof(y));
    printf("Valor do PI com 15 casas decimais: %.15lf\n",y);
    return 0;
}