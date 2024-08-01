#include <stdio.h>
#include <stdlib.h>

int main() {

FILE* arquivo ;

arquivo = fopen("C:\\Users\\cicer\\OneDrive\\Documentos\\vs code\\praticando em linguagens\\c\\exercicios\\filecreated.txt", "a");
if (arquivo == NULL) {
printf("arquivo nao encontrado");
exit(0);
}

fprintf(arquivo, "\nanexando texto\n");

char frase[] = "colocando a frase";
fputs(frase, arquivo);

char letra = 'a';
fputc(letra, arquivo);



fclose(arquivo);

    return 0;
}