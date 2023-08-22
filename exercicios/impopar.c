// Você foi contratado pela brinquedos e presentes para programar um brinquedo educativo para crianças, o brinquedo consiste em um programa, que retorna se um número é par ou ímpar, a partir da entrada do usuário.


#include <stdio.h>

int main(void) {

  int valor;

  printf("digite um numero!");
  scanf("%d",&valor);
    if (valor % 2 == 0) printf("o numero é par!");
    else printf("o numero é impar!");
  
  return 0 ;
}