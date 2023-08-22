#include <stdio.h>

int main(void) {

 while (1) {
   int senha;
   printf("digite a senha: ");
   scanf("%d",&senha);
   if (senha == 2002) {
     printf("senha correta!");
     break;
   }
 }
  return 0 ;
}