#include <stdio.h>

int main(void) {
int resposta = 0 ;

printf("_______________________ \n classificador de aves \n\n");

  printf("Classifique sua ave.\nela voa?\n");
  printf("sim(1) não(0)\n");
  scanf("%d",&resposta);
  if (!resposta) {
        printf("ela nada?\n");
        printf("sim(1) não(0)\n");
        scanf("%d",&resposta);
        if (resposta) {
          printf("Sua ave é uma galinha.");
        } else {
          printf("Sua ave é um penguim.");
          }

  } else {
        printf("como é o bico dela?\n");
        printf("pequeno(0) medio(1) grande(2)\n");
        scanf("%d",&resposta);
        if (!resposta) {
          printf("Sua ave é uma arara.");
        } else if (resposta == 1) {
          printf("Sua ave é um urubu.");
        } else {
          printf(" Sua ave é um tucano.");
        }
          
    
  }
  
  return 0;
}