// Faça um programa para classificar o salário de uma pessoa, caso seja menor ou igual a 0, diga que o valor está errado, caso seja menor que o salário mínimo (R$ 1320) mande ele denunciar, caso seja entre 1320 e 5000, fale que é uma boa renda, caso seja maior, pergunte onde ele está roubando


#include <stdio.h>

int main(void) {
 float salario;
printf("digite seu salario: ");
  scanf("%f",&salario);

  if (salario < 0) {
    printf("erro! voce esta endividado.");
  } else if ( salario < 1320) {
     printf("esse salario esta abaixo do minimo! denuncie!");
  } else if (salario >= 1320 && salario <= 5000) {
     printf("este é um bom salario.");
  } else {
     printf("salario incrivel!");
  }
  return 0 ;
}

