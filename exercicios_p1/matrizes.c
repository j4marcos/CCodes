#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void mostrarVetor(int vetor[], int tamanho) {
for (int i = 0; i < tamanho; i++) printf("[%d]\n",vetor[i]);
}   

void exibir(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j ++) printf("[%d]", matriz[i][j]);
        printf("\n");
}
}

void preencherMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int contagem = 0;
    for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) {
        matriz[i][j] = contagem;
        contagem ++;
    }
}

void preencherRan(int linhas, int colunas, int matriz[linhas][colunas]) {
    srand(time(NULL));
    for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) matriz[i][j] = rand()%10;
}

int maiorE(int linhas, int colunas, int matriz[linhas][colunas]) {
    int maiorE = matriz[0][0];
    for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) maiorE = matriz[i][j] > maiorE? matriz [i][j] : maiorE;
    return maiorE;
}

int menorE(int linhas, int colunas, int matriz[linhas][colunas]) {
    int menorE = matriz[0][0];
    for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) menorE = matriz[i][j] < menorE? matriz [i][j] : menorE;
    return menorE;
}

int* posicaoMaiorE(int linhas, int colunas, int matriz[linhas][colunas]) {
    int maiorE = matriz[0][0];
    int *posicao = &matriz;
    for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) {
        if (matriz[i][j] > maiorE) {
            posicao = matriz[i][j];
        }
    }
    return posicao;
}

void vetorDiagonal(int linhas, int colunas, int matriz[linhas][colunas], int vetor[linhas]){
    for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) {
        if (i == j) vetor[i] = matriz[i][j];
    }    
}

void vetorDiagonalSec(int linhas, int colunas, int matriz[linhas][colunas], int vetor[linhas]){
    int i = 0;
    int j = colunas -1;
    while (i < linhas && colunas >= 0) {
        vetor[i] = matriz[i][j];
        i++;
        j--;
    }
}

void matrizTransposta(int linhas, int colunas, int matriz[linhas][colunas], int matriz2[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) matriz2[i][j] = matriz[j][i];
}

int maiorLinha(int linhas, int colunas, int matriz[linhas][colunas]) {
    int maiorLinha = 0;
    int linhaSoma = 0;
    for(int k = 0; k < colunas ; k ++) linhaSoma = matriz[0][k];
    for (int i = 0; i < linhas ; i ++) {
        int soma = 0;
        for (int j = 0; j < colunas ; j ++) soma += matriz[i][j];
        if (soma > linhaSoma) {
            linhaSoma = soma;
            maiorLinha = i;
        }
    }
    return maiorLinha + 1;
}

void multiplicarMatrizMenorE(int linhas, int colunas, int matriz[linhas][colunas], int resultante[linhas][colunas]) {
int menorValor = menorE(linhas, colunas, matriz);
for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) resultante[i][j] = matriz[i][j]* menorValor;
}

void multiplicarMatrizSomaLinha(int linhas, int colunas, int matriz[linhas][colunas],int vetor[linhas], int resultante[linhas][colunas]) {
for (int i = 0; i < linhas; i++) for (int j = 0; j < colunas; j ++) resultante[i][j] = matriz[i][j]* vetor[i];
}

void linhasSoma(int linhas, int colunas, int matriz[linhas][colunas], int vetor[linhas]) {
    for (int l = 0; l < linhas; l ++) vetor[l] = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j ++) vetor[i] += matriz[i][j];
    }
}

int main() {

    int linhas = 8;
    int colunas = 8;

    int A[linhas][colunas];
    int diagonal[linhas];
    int vetorSoma[linhas];
    int T[linhas][colunas];
    int R[linhas][colunas];


    preencherMatriz(linhas, colunas, A);
    exibir(linhas, colunas, A);
    printf("maior elemento = %d\n",maiorE(linhas,colunas,A));
    printf("endereco do maior elemento %p\n", posicaoMaiorE(linhas,colunas,A));
    
    vetorDiagonal(linhas,colunas,A,diagonal);
    mostrarVetor(diagonal, linhas);
    vetorDiagonalSec(linhas,colunas,A,diagonal);
    mostrarVetor(diagonal, linhas);

    matrizTransposta(linhas,colunas,A,T);
    exibir(linhas, colunas, T);
    printf("\n%d\n",maiorLinha(linhas,colunas,A));

    preencherRan(linhas, colunas, A);
    exibir(linhas,colunas, A);

    multiplicarMatrizMenorE(linhas,colunas, A, R);
    exibir(linhas, colunas, R);

    preencherMatriz(linhas, colunas, A);
    exibir(linhas, colunas, A);
    linhasSoma(linhas, colunas, A , vetorSoma);
    mostrarVetor(vetorSoma, linhas);

    multiplicarMatrizSomaLinha(linhas,colunas, A, vetorSoma, R);
    exibir(linhas,colunas, R);



 return 0;   
} 