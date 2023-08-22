#include <stdio.h>

int seEhPrimo(int valor) {
  int i;
  int primo = 1;
  for (i = 2 ; i < valor ; i++) {
    if (valor % i == 0) primo = 0;
  }
  if (primo == 0) return 0;
  else return 1;
}

int main(void) {
  int resposta;
  printf("digite um numero:\n");
  scanf("%d",&resposta);
  if (seEhPrimo(resposta)) printf("é primo\n");
  else printf("não é primo\n");
  return 0;
}