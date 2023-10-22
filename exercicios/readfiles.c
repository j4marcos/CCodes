#include <stdio.h>
#include <stdlib.h>

int main() {

FILE* arquivo ;

arquivo = fopen("C:\\Users\\cicer\\OneDrive\\Documentos\\vs code\\praticando em linguagens\\c\\exercicios\\filecreated.txt", "r");
if (arquivo == NULL) {
printf("arquivo nao encontrado");
return 0;
}
char letras[50];

while (fgets(letras, 50, arquivo) != NULL) {
    printf("%s", letras);
}
printf("\n\n");

fscanf(arquivo, "%s", letras);
printf("%s", letras);



fclose(arquivo);

    return 0;
}