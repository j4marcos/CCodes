//ATIVIDADE AVALIATIVA COMPLEMENTAR:
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void preencherVetor(int* vetor, int t) { 
    for (int i = 0; i < t ; i++) vetor[i] = rand()%1000; 
}

void mostrarVetor(int* vetor, int t) { 
    for (int i = 0; i < t ; i++) printf("[%d] ",vetor[i]);
}

int vetorOrdenado(int* vetor, int t) {
    for (int i = 1; i < t ; i++)  if (vetor[i] < vetor[i-1]) return -1;
    return 1;
}

void preencherMatriz(int matriz[4][7], int linha, int coluna) {
    for (int i = 0; i < linha; i++) for (int j = 0; j< coluna; j++) matriz[i][j] = rand()%100;
}

void mostrarMatriz(int matriz[4][7], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j< coluna; j++) printf("[%d] ",matriz[i][j]);
        printf("\n");
    }
}

int minmax(int matriz[4][7], int linha, int coluna, int inf[3]) {
    int* e; 
    e = &inf[0];
    *e = matriz[0][0];
    int* l ;
    l = &inf[1];
    *l = 0;
    int* c ;
    c = &inf[2];
    *c = 0;
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j< coluna; j++) {
            if (matriz[i][j] < *e) {
                *e = matriz[i][j];
                *l = i;
                *c = j;
            }
        }
    }
    //agora que achou a posicao do min elemento, agora vai procurar o max na mesma linha
    *e = matriz[*l][0];
    for (int j = 0; j < coluna; j++) {
        if (matriz[*l][j] > *e) {
            *e = matriz[*l][j];
            *c = j;
        }
    }
    return *e;
}

int mediaVetor(int* vetor, int t) {
    int soma = 0 ;
    for (int i = 0; i < t ; i ++) soma += vetor[i];
    int media = soma / t ;
    return media ;
}

void particionar(  int media , int* vetor , int t, int* v1, int* v2) {
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < t ; i ++) {
        if (vetor[i] < media) {
            v1[c1] = vetor[i];
            c1++;
        } else {
            v2[c2] = vetor[i];
            c2++;
        }
    }
}



int main() {
    //1. Escreva um programa completo em C, usando funções, que leia um vetor e mostre a mensagem “VETOR ORDENADO.” ou “VETOR NÃO ORDENADO.” caso o vetor esteja ordenado ou não.
//Considerações:
//a. Escreva uma função que armazene os números no vetor (os números podem ser lidos pelo usuário ou gerados aleatoriamente).
//b. Escreva uma função que mostre o vetor.
//c. Escreva uma função que retorne 1 se o vetor estiver ordenado e -1 em caso contrário.

int vetor[10];

preencherVetor(vetor, 10);
mostrarVetor(vetor, 10);
printf("\n");

if (vetorOrdenado(vetor, 10) == 1) printf("VETOR ORDENADO."); 
else printf("VETOR NAO ORDENADO."); 
printf("\n\n");


//2. Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da linha em que se encontra o menor elemento da matriz. Escreva um programa, usando funções, que receba uma matriz 4x7 com números inteiros e calcule o MINMAX e a sua posição (linha e coluna).
//Considerações:
//a. Escreva uma função que armazene os números na matriz (os números podem ser lidos pelo usuário ou gerados aleatoriamente).
//b. Escreva uma função que mostre a matriz formatada.
//c. Escreva uma função que receba como parâmetro a matriz e retorne o MINMAX e a sua posição (linha e coluna).

int matriz[4][7];

preencherMatriz(matriz, 4, 7);
mostrarMatriz(matriz, 4, 7);
printf("\n");

int inf[3];
printf("MINMAX: %d ; ", minmax(matriz, 4, 7, inf));
printf("linha[%d] coluna[%d]", inf[1], inf[2]);
printf("\n\n");



//3. Escreva um programa completo em C, usando funções, que leia um vetor e particione os elementos do vetor pelo seu valor médio, gerando dois outros vetores: o primeiro contendo os elementos que tenham valores menores que a média, e o segundo contendo os elementos com valores maiores ou iguais à média. Por exemplo, o vetor V ilustrado abaixo gera como resultado os vetores V1 e V2, uma vez que a média dos elementos em V é 33.85.
//V: 10 15 3 7 87 101 14
//V1: 10 15 3 7 14
//V2: 87 101

//Considerações:
//a. Escreva uma função que armazene os números no vetor (os números podem ser lidos pelo usuário ou gerados aleatoriamente).
//b. Escreva uma função que mostre o vetor. A mesma função deverá ser usada para mostrar o vetor V e os vetores particionados, V1 e V2.
//c) Utilize as definições:
//#define MAX 100
//int V[MAX];
//d) Você deve obrigatoriamente escrever uma função para calcular a média dos elementos do vetor.
//e) Escreva uma função que particiona os elementos do vetor V pelo seu valor médio.

int V[MAX];
static int v1[MAX], v2[MAX];

preencherVetor(V, MAX);
printf("vetor origem:\n");
mostrarVetor(V, MAX);
printf("\n\n");

particionar(  mediaVetor(V, MAX)  , V, MAX, v1,v2);
printf("vetor dos elementos menores que a media:\n");
mostrarVetor(v1, MAX);
printf("\n\n");
printf("vetor dos elementos acima ou igual a media:\n");
mostrarVetor(v2, MAX);
printf("\n\n");


    return 0;
}
