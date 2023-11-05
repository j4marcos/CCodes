#include <stdio.h>
#include <stdlib.h>

void addPalavra(char* destino, char* origem) {
    for(int i = 0; origem[i] != '\0' && origem[i] != '\n' && origem[i] != ' ' ; i++) destino[i] = origem[i];
    return;
}

int nLetrasPalavra(char* string) {
    int n = 0;
    for(int i = 0; string[i] != '\0' && string[i] != '\n' && string[i] != ' ' ; i++) n++;
    return n;
}

int stringTamanho(char* string) {
    int n;
    for(int i = 0; string[i] != '\0'; i++) n++;
    return n;
}

void criarLogin(char* nome, char* login) {
    int posicaoPalavras[20];
    int nPalavras = 0;
    int lendoPalavra = 0;
    for(int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') break;
        if(!lendoPalavra && nome[i] != ' ') {
            lendoPalavra = 1;
            posicaoPalavras[nPalavras] = i;
        }
        if(lendoPalavra && nome[i] == ' ') {
            lendoPalavra = 0;
            nPalavras++;
        }
    }
    if(lendoPalavra) nPalavras++;
    // leu todas as plavras e identificou o comeco de cada uma e a quantidade delas;
    
    int nLetras = 0;
    login[0] = nome[posicaoPalavras[0]];
    nLetras++;
    if (nPalavras == 2) {
        addPalavra(&login[1], &nome[posicaoPalavras[1]]);
        nLetras = nLetras + nLetrasPalavra(&nome[posicaoPalavras[nPalavras -1]]);;
        
    }
    if (nPalavras > 2) {
        login[1] = nome[posicaoPalavras[1]];
        addPalavra(&login[2], &nome[posicaoPalavras[nPalavras -1]]);
        nLetras = nLetras + nLetrasPalavra(&nome[posicaoPalavras[nPalavras -1]]);
        
    }
    login[nLetras + 1] = '\0';
    return;
}

int main() {
    char nome[300];
    fgets(nome,300,stdin);
     if(stringTamanho(nome) == 0) {
        puts("erro! digite ao menos uma palavra!");
        main();
    }

    char login[300];
    criarLogin(nome,login);
    printf("%s",login);
    return 0;
}