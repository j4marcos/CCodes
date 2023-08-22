Faça um quiz com perguntas de sim (1) e não (2), que no fim exibe quantas respostas corretas foram feitas.


#include <stdio.h>
int main(void) {
  
int pontuacao = 0 ;
char resposta;

printf("_______________________ \n ------quiz---------- \n responda com (s) ou (n)\n", resposta);

  printf("A terra é plana?\n");
  scanf("%c%*c",&resposta);
  if (resposta == 'n') {
    pontuacao ++;
  }
  
printf("O ceu eh azul?\n");
  scanf("%c%*c",&resposta);
  if (resposta == 's') {
    pontuacao ++;
  }

  printf("9 elevado a 3 eh 24?\n");
  scanf("%c%*c",&resposta);
  if (resposta == 'n') {
    pontuacao ++;
  } 
  printf("A grama eh verde?\n");
  scanf("%c%*c",&resposta);
  if (resposta == 's') {
    pontuacao ++;
  }

  printf("voce bebe H2O?\n");
  scanf("%c%*c",&resposta);
  if (resposta == 's') {
    pontuacao ++;
  } 

  if (pontuacao == 5) {
  printf("parabens vc passou! %d/5 \n",pontuacao,resposta);
    } else {
    printf("voce é burro! %d/5", pontuacao);
  }
  return 0 ;
}