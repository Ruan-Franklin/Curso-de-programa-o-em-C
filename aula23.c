#include <stdio.h>
#include <stdlib.h>
/*Aula 23: O que são os caracteres de escape \ \n, \t, "\, \" e // */

/*Caracteres de escape:
Quebra de linha => \n
Tabulçaõa => |t
Aspa dupla => \"
Aspa simples => \'
Contrabarra => \\
*/  
int main(){
    printf("\tIsso é uma mensagem a ser \"impressa\" \\ na tela\n");
    return 0;
}