#include <stdio.h>
#include <stdlib.h>
int main(){
    int num = 5;
    printf("Digite um número:\n");
    scanf("%d",&num);
    if( ! (num < 0) ){
      printf("Positivo ou igual a zero!\n");}
    else{
      printf("Negativo!\n");}
    return 0;
}