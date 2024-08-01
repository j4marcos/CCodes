// Um matematico te procurou para fazer uma super calculadora de Bhaskara, você deve ler os valores de A, B e C (float) e deve printar:
// --> caso delta seja negativo ou A = 0 -> "Impossivel calcular"
// --> caso seja possível -> valor das 2 raízes
#include <stdio.h>
#include <math.h>

int main(void) {

  float a;
  float b;
  float c;
  float delta;
  float x1;
  float x2;
  
  printf("============================\n");
  printf("SUPER CALCULADORA DO 2 GRAU!\n");
  printf("============================\n");
  printf("digite os valore de:\n");
  printf("A:\n");
  scanf("%f",&a);
  printf("B:\n");
  scanf("%f",&b);
  printf("C:\n");
  scanf("%f",&c);

  if (a == 0) printf("isso não é uma equação do segundo grau");
  else {
  delta = (b * b) - 4*a*c;
    if (delta < 0) printf("não ha solução nos reais. delta é: %f",delta);
    else {
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    if (x1 == x2) printf("%f é o unico valor de X",x1);
      else {
        printf("%fos valores para X são:\n",delta);
         printf("X1 = %f\n",x1);
         printf("X2 = %f",x2);
      }
    }
  }
  
  
  
  return 0 ;
}