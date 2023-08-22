// Um engenheiro te contratou para fazer um projeto de medição do tamanho das colunas para uma construção, faça a leitura do tamanho de 3 dessas estruturas e printe a maior e a menor coluna.
#include <stdio.h>
int main(void) {

  float coluna1;
  float coluna2;
  float coluna3;

  float maior = 0;
  float menor = 1000000000;
  int colunaMaior;
  int colunaMenor;

  printf("insira o tamanho das colunas:\n");
  printf("primeira coluna:\n");
  scanf("%f",&coluna1);
  if (coluna1 > maior) {colunaMaior = 1;
   maior = coluna1;}
  if (coluna1 < menor) {colunaMenor = 1;
   menor = coluna1;}
  printf("segunda coluna:\n");
  scanf("%f",&coluna2);
  if (coluna2 > maior) {colunaMaior = 2;
   maior = coluna2;}
  if (coluna2 < menor) {colunaMenor = 2;
   menor = coluna2;}
  printf("terceira coluna:\n");
  scanf("%f",&coluna3);
  if (coluna3 > maior) {colunaMaior = 3;
   maior = coluna3;}
  if (coluna3 < menor) {colunaMenor = 3;
   menor = coluna3;}
  
  
  printf("A maior coluna é a %d° com %.2f e a menor coluna é a %d° com %.2f",colunaMaior,maior,colunaMenor,menor);
  return 0 ;
}