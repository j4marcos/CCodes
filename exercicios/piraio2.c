#include <stdio.h>
#define PI 3.14

int main(void) {

  int raio;
  float area;
  printf("escreva o comprimento do raio:");
  scanf("%d", &raio);

  area = PI * raio * raio ;
  
  
  printf("a area do circulo é %.2f",area);
  return 0 ;
}