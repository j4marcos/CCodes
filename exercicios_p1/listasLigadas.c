#include <stdio.h>
//listas ligadas [concluido]
// criar uma listas ligadas. padrao e pilha [fazendo]
// criar buscas e ordeacoes pra essas listas [a fazer]


// uma lista são estruturas que formam uma corda que liga coisas. Cada elemento é ligada pelo nó. A corda é formada pelo: o inicio da corda, a corda, e o nó. ha uma estrutura para o inicio, e uma estrutura para o nó, e dentro se cada uma delas ha um ponteiro para o proximo nó, formando a corda.

//corda:
// inicio --> Nó -->  Nó -->  Nó -->  Nó -->  Nó -->  Nó -->  Nó --> 
//             |       |       |       |       |       |       |
//           coisa   coisa   coisa   coisa   coisa   coisa   coisa 


// elemento no qual o nó é ligado.
typedef struct {
    int id;
} Registro;


// estrutura do NO da corda
typedef struct aux{
        Registro reg;
        struct aux* prox;
    } No;


// inicio da corda, elemento identificador da lista
//o inicio tem a quantidade de nós, que é a quantidade de elementos.
typedef struct {
    No* inicio;
    int elementos;
} Lista;


// ajuda a criar uma lista 
void inicializa(Lista* l) {
    l -> inicio = NULL;
    l -> elementos = 0;
}

// insere um nvo elemento
void insere(Lista* l, Registro reg, int posicao) {
    if (posicao < 0 || posicao > l -> elementos) return ;
    No* novo = (No*) malloc(sizeof(No));
    novo -> reg = reg;
    if (posicao == 0) {
        novo -> prox = l -> inicio ;
        l -> inicio = novo;
    } else {
        No* no = l -> inicio;
        for (int i = 1; i < posicao; i++) no = no -> prox;
        novo -> prox = no -> prox;
        no -> prox = novo;
    }
    l -> elementos++;
}

void mostrarLista(Lista lista) {
    printf("Inicio --> ");
    No* no = lista.inicio;

    while (no != NULL) {
        printf("no --> ");
        no = no -> prox;
    }
    printf("NULL\n");

    printf("Elementos: ");
    no = lista.inicio;
    while (no != NULL) {
        printf("%d      ", no -> reg.id);
        no = no -> prox;
    }
}

void excluir(Lista* l, int posicao) {
    if (posicao == 0) {
        No* excluir = l -> inicio;
        l -> inicio = l -> inicio->prox;
    } else {
        No* no = l -> inicio;
        for (int i = 1; i < posicao; i++) no = no -> prox;
        No* excluir = no->prox;
        no -> prox = no -> prox->prox;
    }
    free(excluir);
    l -> elementos--;
}


int main() {
    //cria a lista 
    Lista l1;
    inicializa(&l1);

    //cria os elementos
    Registro pessoa1;
    pessoa1.id = 01;
    Registro pessoa2;
    pessoa2.id = 02;
    Registro pessoa3;
    pessoa3.id = 03;
    Registro pessoa4;
    pessoa4.id = 04;
    Registro pessoa5;
    pessoa5.id = 05;

    //coloca os elementos na lista
    insere(&l1, pessoa1, 0);
    insere(&l1, pessoa2, 0);
    insere(&l1, pessoa3, 0);
    insere(&l1, pessoa4, 3);
    insere(&l1, pessoa5, 4);

    excluir(&l1, 2);

    mostrarLista(l1);
    
    return 0;
}