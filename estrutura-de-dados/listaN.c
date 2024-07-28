#include <stdio.h> 
#include <stdlib.h>
// lista 
struct List {
    int* V;
    int cont;
    int max;
};

int vetor[10];

struct List createList(int max);
void show(struct List l);
char insert(struct List* l, int value);
char insertAt(struct List* l, int value, int index);
char remover(struct List* l, int idx);
char removerAt(struct List* l, int idx);
char isEmpty(struct List l);
char isFull(struct List l);
int listLength(struct List l);
char deleteList(struct List* l);

int main() {
    struct List list = createList(10);

    // Test createList
    printf("Test createList:\n");
    printf("List max size: %d\n", list.max);
    printf("List current size: %d\n", list.cont + 1);
    printf("\n");

    show(list);

    // Test insert
    printf("Test insert:\n");
    printf("Inserting 5 into the list...\n");
    char insertResult = insert(&list, 5);
    if (insertResult) {
        printf("Insert successful!\n");
    } else {
        printf("Insert failed! List is full.\n");
    }
    printf("\n");

    show(list);

    // Test insertAt
    printf("Test insertAt:\n");
    printf("Inserting 10 at index 0...\n");
    char insertAtResult = insertAt(&list, 10, 0);
    if (insertAtResult) {
        printf("InsertAt successful!\n");
    } else {
        printf("InsertAt failed! List is full.\n");
    }
    printf("\n");

    show(list);

     // Test isFull
    printf("Test isFull:\n");
    char isFullResult = isFull(list);
    if (isFullResult) {
        printf("List is full.\n");
    } else {
        printf("List is not full.\n");
    }
    printf("\n");

    show(list);

    // Test remover
    printf("Test remover:\n");
    printf("Removing element at index 0...\n");
    char removerResult = remover(&list, 0);
    if (removerResult) {
        printf("Remover successful!\n");
    } else {
        printf("Remover failed! List is empty.\n");
    }
    printf("\n");

    show(list);

    // Test removerAt
    printf("Test removerAt:\n");
    printf("Removing element at index 1...\n");
    char removerAtResult = removerAt(&list, 1);
    if (removerAtResult) {
        printf("RemoverAt successful!\n");
    } else {
        printf("RemoverAt failed! List is empty.\n");
    }
    printf("\n");

    show(list);

    // Test isEmpty
    printf("Test isEmpty:\n");
    char isEmptyResult = isEmpty(list);
    if (isEmptyResult) {
        printf("List is empty.\n");
    } else {
        printf("List is not empty.\n");
    }
    printf("\n");

    show(list);

   

    deleteList(&list);

    return 0;
}

struct List createList(int max) {
    struct List l;
    l.max = max;
    l.V = (int*) malloc(max * sizeof(int));
    l.cont = -1;

    return l;
}

char deleteList(struct List* l) {
    free(l->V);
}

void show(struct List l) {
    printf("legth: %d\n", l.cont + 1);
    printf("max: %d\n", l.max);
        printf("[");
    for (int i = 0 ; i < l.max; i++) {
        printf("%d,", l.V[i]);
    }
        printf("]\n\n");
}

char insert(struct List* l, int value) {
    if (isFull(*l) == 0) {
        l->V[l->cont + 1] = value;
        printf("inserted %d\n", l->V[l->cont + 1]);
        l->cont ++;
        return 1;
    } else return 0;
}

char insertAt(struct List* l, int value, int index) {
    if (isFull(*l) == 0) {

        int prevList[l->cont + 1];
        int prevCount = 0;
        for (int c = 0 ; c <= l->cont + 1 ; c ++) prevList[c] = l->V[c];

        for (int i = 0 ; i <= l->cont + 1; i++) {
            if (i == index) {
                l->V[index] = value;
            } else {
            l->V[i] = prevList[prevCount];
            prevCount++;
            }
        }
        l->cont++;
        return 1;
    } else return 0;
}

char remover(struct List* l, int idx) {
    if (isEmpty(*l) == 0) l->cont--;
    else return 0;
}

char removerAt(struct List* l, int idx) {
    if (isEmpty(*l) == 0) {

    int prevList[l->cont + 1];
    int prevCount = 0;
    for( int c = 0; c <= l->cont + 1; c++) prevList[c] = l->V[c];

    for (int i = 0; i < l->max ; i ++) {
        if (i != idx) l->V[i] = prevList[prevCount];
            prevCount ++;
    }
    l->cont--;
    return 1;
    } return 0;
}

char isEmpty(struct List l) {
    if (l.cont == -1) return 1;
    return 0;
}

char isFull(struct List l) {
    if (l.cont + 1 >= l.max) return 1;
    else return 0;
}

int listLength(struct List l) {
    return l.cont + 1;
}