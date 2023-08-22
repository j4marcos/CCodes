#include <stdio.h>

int main(void) {
int valor;
  int resposta;
   int ndevalores =0;
  int positivos =0;
  int negativos =0;
  int impares =0;
  int pares =0;
  do {
    printf("coloque um valor:");
    scanf("%d",&valor);
    printf("o valor foi %d, deseja adicionar um novo valor? sim(1) nao (0)",valor);
    scanf("%d",&resposta);
    if (valor > 0) positivos++;
    if (valor >0) negativos++;
    if (valor % 2 == 0) pares++;
    else impares++;
    ndevalores++;
  } while(resposta == 1);

  printf("foram %d numeros positivos %d numeros negativos %d numeros impares e %d numeros pares. ao total foram %d respostas",positivos,negativos,impares,pares, ndevalores);
  return 0 ;
}