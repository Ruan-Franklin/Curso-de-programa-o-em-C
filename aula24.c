#include <stdio.h>
#include <stdlib.h>

/*Aula 24: Como usar as operações básicas de matemática na linguagem C? */
/*Operadores matemáticos para:
Soma => "+"
Subtração => "-"
Multiplicação => "*"
Divisão => "/"
*/
int main(){

    printf("Soma: %d\n",10+20);
    printf("Subtração: %d\n",10-20);
    printf("Multiplicação: %d\n", 10*20);
    printf("Divisão: %f\n",10/20.0); 
    /*A divisão tendo um float como resultado só acontece se algum dos números envolvidos tiver um ponto no meio. */

    return 0;

}