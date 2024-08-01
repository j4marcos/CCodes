#include <stdio.h>
#include <stdlib.h>

void identificarPalavras(char* nome, int* posicaoPalavras, int* nPalavras) {

    puts("identificando...");
    int lendoPalavra = 0;
    for(int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') break;
        if(!lendoPalavra && nome[i] != ' ') {
            lendoPalavra = 1;
            posicaoPalavras[(*nPalavras)] = i;
        }
        if(lendoPalavra && nome[i] == ' ') {
            lendoPalavra = 0;
            *nPalavras += 1;
        }
    }

    puts("separado palavras!");
    if(lendoPalavra) *nPalavras += 1;
    // leu todas as plavras e identificou o comeco de cada uma e a quantidade delas;
    return;
}

int addPalavra(char* destino, char* origem) {
    puts("adicionando palavra...");
    int c = 0;
    for(int i = 0; (origem[i] != '\0') && (origem[i] != '\n') && (origem[i] != ' ') ; i++) {
        destino[i] = origem[i];
        c++;
    }
    puts("add palavra!");
    return c;
    
}

void formatarNome(char* nome, int* posicaoPalavras, int* nPalavras, char* formatacao) {
puts("formatando!");
int nLetras = addPalavra(formatacao, &nome[posicaoPalavras[0]]);
for (int i = 0; i < *nPalavras - 2 ; i ++) {
    formatacao[nLetras] = ' ';
    formatacao[nLetras + 1] = nome[posicaoPalavras[i + 1]];
    formatacao[nLetras + 2] = '.';
    nLetras += 3;
}
puts("quase pronto!");
formatacao[nLetras] = ' ';
nLetras += addPalavra(&formatacao[nLetras + 1], &nome[posicaoPalavras[ *nPalavras -1 ]] ) + 1;
formatacao[nLetras] = '\0';

puts("pronto!");
}

int main() {

    char nome[300];
    fgets(nome, 300, stdin);
    int posicaoPalavras[30];
    int nPalavras = 0;

    char nomeFormatado[300];
    puts("comecou a formatar");
    identificarPalavras(nome, posicaoPalavras, &nPalavras);
    printf("%d palavras no nome...\n", nPalavras);
    formatarNome( nome, posicaoPalavras, &nPalavras, nomeFormatado);
    printf("%s \n", nomeFormatado);


    return  0;
}