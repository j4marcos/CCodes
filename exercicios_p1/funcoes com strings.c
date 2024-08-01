#include <stdio.h>

int ocorrencia(char* str1, char letra) {
int vezes = 0;
for (int i = 0 ; str1[i] != '\0'; i++ ) if(str1[i] == letra) vezes++;
return vezes;
}

int nPalavras(char* str1) {
int n = 0;
int i;
for ( i = 0 ; str1[i] != '\0'; i++ ) if(str1[i] == ' ') n++;
if (i != 0) n++;
return n;
}

int nLetras(char* str1) {
    int vogais = 0;
    for (int i = 0 ; str1[i] != '\0'; i++ ) {
    if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' ||
    str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U') {
        vogais++;
        str1[i] = '*';
        }
    }
return vogais;
}

int main() {

   printf("%d\n", ocorrencia("elefante",'a'));
   printf("%d\n", nPalavras("elefante abacaxi macaco;"));
   char frase[] = "elefante abacaxi macaco";
   printf("%d\n", nLetras(frase));
   printf("%s\n", frase);
   return 0;
}