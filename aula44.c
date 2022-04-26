#include <stdio.h>
#include <stdlib.h>
int main(){
    
int num;

printf("Digite um valor inteiro: ");
scanf("%d", &num);

if(num < 0)
  printf("Negativo!\n");
else{
  if(num > 0)
    printf("Positivo!\n");
  else
    printf("Igual a zeo!\n");
}
return 0;
}