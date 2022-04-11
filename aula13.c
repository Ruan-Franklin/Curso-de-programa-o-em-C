#include <stdio.h>
#include <stdlib.h>
/*Aula 13: ler dois caracteres e limpar o buffer do teclado com espaço? */
int main(){
    char a,b;
    printf("Digite duas letras\n");
    scanf("%c %c",&a,&b);
    /*Buffer do teclado é resolvido separando os %c um do outro, dando um pequeno espaço */
    /* O espaço entre os %c é o comando para o computador desconsiderar o ENTER, O TAB e o SPACE */
    
    printf("Primeira letra:%c\nSegunda letra: %c\n",a,b);


    return 0;
}