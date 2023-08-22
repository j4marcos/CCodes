// Uma escola te contratou para fazer um sistema de notas, onde é lido 2 notas do aluno, caso ele receba uma média maior que 7, é aprovado, caso receba menos, é lido quanto tirou na recuperação, se a média das 3 notas for maior que 7, é aprovado, caso não, reprovado


#include <stdio.h>

int main(void) {
  float nota1;
  float nota2;
  float recuperacao;
printf("digite sua primeira nota: ");
  scanf("%f",&nota1);
  printf("\ndigite sua segunda nota: ");
  scanf("%f",&nota2);
  if (nota1 + nota2 / 2 >= 7) {
    printf("\nvoce passou!");
  } else {
    printf("\nprecisa fazer recuperacao! digite a nota da recuperacao:");
      scanf("%f",&recuperacao);
     if (nota1 + nota2 + recuperacao / 3 >= 7) {
    printf("\nagora voce passou!");
  } else {
    printf("\ninfelizmente voce reprovou ;-;");
  }
  }
  if (nota1 > 10 || nota2 > 10 || recuperacao >10 || nota1 < 0 || nota2 < 0 || recuperacao < 0) {
    printf(" mas ha um erro, uma ou mais notas são invalidas");
  }

  return 0 ;
} 

