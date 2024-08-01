#include <stdio.h>

void encherVetor(int vetor[], int quantidade) {
for (int i = 0; i < quantidade; i++){
    vetor[i] = i;
}
}

void concatenarVetores(int A[],int Aidx, int B[],int Bidx, int C[],int Cidx) {
for(int i = 0; i< Aidx;i++) C[i] = A[i];
for(int i = Aidx; i< Bidx + Aidx;i++) C[i] = A[i - Aidx];
}

void intercalarVetores(int A[],int Aidx, int B[],int Bidx, int C[],int Cidx) {
int Atamanho = Aidx;
int Btamanho = Bidx;
for (int i = 0; i < Cidx; i++) {
    if (Aidx > Bidx || Aidx == Bidx) {
        C[i] = A[Atamanho - Aidx];
        Aidx--;
    } else {
        C[i] = B[Btamanho - Bidx];
        Bidx--;
    }
}
}

void inverterVetor(int vetor[],int tamanho) {
    int copia[tamanho];
for (int i = 0; i < tamanho; i++)   copia[i] = vetor[i];
for(int i = 0; i< tamanho; i++) vetor[i] = copia[tamanho - 1 - i];
}

void mostrarVetor(int vetor[], int tamanho) {
for (int i = 0; i < tamanho; i++) printf("[%d]\n",vetor[i]);
}   

int fatorial(valor) {
    int fat = 1;
    for (; valor > 0 ; valor--) fat *= valor;
    return fat; 
}

void listaFatorial(int vetor1[],int tamanho1,int vetor2[], int tamanho2 ) {
    for (int i = 0; i< tamanho1; i++) vetor2[i] = fatorial(vetor1[i]);
}

int procurarElemento(int elemento,int vetor[],int tamanho) {
    for (int i = 0; i<tamanho ; i++) if (elemento == vetor[i]) return i;
    return NULL;
}

void maiorElemento(int vetor[], int tamanho) {
    int maiorE = 0;
    int idxMaiorE = 0;
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] > maiorE) {
            maiorE = vetor[i];
            idxMaiorE = i;
        }
    }
    printf("maior elemento = [%d], no indice [%d]",maiorE,idxMaiorE);
}

void intersecaoVetores(int vetor1[],int tamanho1,int vetor2[], int tamanho2) {
    for (int i = 0; i < tamanho1; i++) for(int j = 0; j < tamanho2; j++) if (vetor1[i] == vetor2[j]) printf("%d",vetor1[i]);
}

int main()
{
    int tamanhoA = 10;
    int tamanhoB = 10;
    int tamanhoC = tamanhoA + tamanhoB;

    int A[tamanhoA];
    int B[tamanhoB];
    int C[tamanhoC];

    encherVetor(A, tamanhoA);
    encherVetor(B, tamanhoB);

    intercalarVetores(A, tamanhoA, B, tamanhoB, C, tamanhoC);
    mostrarVetor(C, tamanhoC);

    printf("\n\n");

    inverterVetor(C, tamanhoC);
    mostrarVetor(C, tamanhoC);

    maiorElemento(C, tamanhoC);

    printf("\n\n");

    concatenarVetores(A, tamanhoA, B, tamanhoB, C, tamanhoC);
    mostrarVetor(C, tamanhoC);

    printf("\n\n");

    // int valor;
    // scanf("%d",&valor);
    // printf("%d",procurarElemento(valor,C,tamanhoC));

    printf("\n\n");

    listaFatorial(A, tamanhoA, B, tamanhoB);
    mostrarVetor(A, tamanhoA);
    mostrarVetor(B, tamanhoB);

    printf("\n\n");

    intersecaoVetores(A, tamanhoA, B, tamanhoB);
    mostrarVetor(C, tamanhoC);

    return 0;
}
