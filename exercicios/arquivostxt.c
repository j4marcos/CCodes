#include <stdio.h>
#include <stdlib.h>

enum bolean {
false = 0,
true = 1
};

int main() {



FILE* arquivo ;

//abrir o arquivo, e se nao existir, cria
arquivo = fopen("C:\\Users\\cicer\\OneDrive\\Documentos\\vs code\\praticando em linguagens\\c\\exercicios\\filecreated.txt", "w");

// fopen("filecreated.txt", "w"); cria no proprio local do arquivo do codigo
// segundo parametro: w - Writes to a file (escreve do zero), a - Appends new data to a file (altera conteudo), r - Reads from a file

//escreve no arquivo
fprintf(arquivo,"abacaxi");

fclose(arquivo);


    return 0;
}