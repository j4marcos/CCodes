Faça uma calculadora com menu, que faz as operações de soma, subtração, divisão e multiplicação.


#include <stdio.h>

int main(void) {
  float valor1;
  float valor2;
  int operacao;
printf("digite o primeiro valor:");
scanf("%f",&valor1);
  printf("digite o segundo valor:");
scanf("%f",&valor2);  
  printf("os valores são (%f) e (%f),\n qual operação deseja fazer com eles?\n", valor1, valor2);
    printf(" soma(1)\n subtração(2)\n divisão(3)\n multiplicação(4)\n");
  scanf("%d",&operacao);
  
  switch (operacao) {
    case 1:
     printf("o resultado da soma de %f e %f é: %f",valor1, valor2, valor1 + valor2);
      break;
    case 2:
printf("o resultado da subtracao de %f e %f é: %f",valor1, valor2, valor1 - valor2);
     break; 
    case 3:
     printf("o resultado da divisão de %f e %f é: %f",valor1, valor2, valor1 / valor2);
     break;
  case 4:
   printf("o resultado da multiplicação de %f e %f é:\n %f",valor1, valor2, valor1 * valor2);
    break;
    default:
  printf("erro, comando invalido!");
  }
  
return 0;
}