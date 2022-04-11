  #include <stdio.h>
  #include <stdlib.h>
  int main(){

  
  char letra1, letra2;
  // leitura do primeiro caracter
  printf("Digite um caracter: ");
  scanf("%c", &letra1);

  // lendo um caracter sem salvar
  scanf("%c");

  printf("Digite outro caracter: ");
  scanf("%c", &letra2);
  return 0;
  }