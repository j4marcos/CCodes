Faça um programa para a empresa de viajem no tempo desinteressante LTDA, nele, leia a idade do usuário e em seguida pergunte se ele quer voltar no tempo. Após isso, leia um char que pode ser s ou n, caso s, transforme a idade do usuário em 0, caso não, mantenha a idade atual.


#include <stdio.h>
int main(void) {
  
int idade;
char resposta;

printf("empresa de viajem no tempo desinteressante LTDA\n qual a sua idade?");
  scanf("%d",&idade);
  printf("Quer viajar no tempo?\n");
  scanf("  %c%*c",&resposta);
  if (resposta == 'n') {
  }

  if (resposta == 's') {
    printf("agora voce tem 0 anos");
  } else {
    printf("entao continue com %d anos",idade);
  }
  return 0 ;
}