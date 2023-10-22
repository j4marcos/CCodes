#include <stdio.h>
#include <stdlib.h>

void copiar(FILE* file1, FILE* file2) {
    char leitor[1000];
    while (fgets(leitor, 1000, file1) != NULL)
    fputs(leitor, file2);
}

int main() {

FILE* arquivo ;

arquivo = fopen("C:\\Users\\cicer\\OneDrive\\Documentos\\vs code\\praticando em linguagens\\c\\exercicios\\filecreated.txt", "r");
if (arquivo == NULL) {
printf("arquivo nao encontrado");
exit(0);
}

FILE* arquivo2;
arquivo2 = fopen("C:\\Users\\cicer\\OneDrive\\Documentos\\vs code\\praticando em linguagens\\c\\exercicios\\filecopied.txt", "w");

copiar(arquivo, arquivo2);


fclose(arquivo);
fclose(arquivo2);

    return 0;
}