#include <stdio.h>

int main(void) {
  int array[1];
  int i;
  float tamanho;
  for (i = 0; i > -1 ; i++) {
  scanf("%d",&array[i]);
    if (array[i] == 0) break;
  }
  tamanho = sizeof(array)/sizeof(int);
  printf("%f",tamanho);
  return 0;
}