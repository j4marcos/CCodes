#include <stdio.h>
#include <stdlib.h>

struct CircularList {
    int* vector;
    int start;
    int end;
    int limit;
};

struct CircularList createList(int);
char insertStart(struct CircularList*,int);
char insertEnd(struct CircularList*, int);
char removeStart(struct CircularList*);
char removeEnd(struct CircularList*);
char isFull(struct CircularList);
char isEmpty(struct CircularList);
void delete(struct CircularList*);
char show(struct CircularList);
void logTest(char, char*);

/////////////////////////////////////////////////////////////////////

void main() {
    struct CircularList list = createList(3);
    show(list);

    char result1 = insertStart(&list, 3);
    logTest(result1, "insert start");
    show(list);

    char result2 = insertEnd(&list, 7);
    logTest(result2, "insert end");
    show(list);

    char result3 = removeStart(&list);
    logTest(result3, "remove start");
    show(list);

    char result4 = removeStart(&list);
    logTest(result4, "remove start");
    show(list);

    char result5 = removeEnd(&list);
    logTest(result5, "remove end : must be error because is empty ;)");
    show(list);

    delete(&list);

}

/////////////////////////

void logTest(char result, char* msg) {
    result ? printf("sucesso %s", msg) : printf("error %s", msg);
}

////////////////////////////////////////////////////////////////////////

struct CircularList createList(int length) {

    struct CircularList list;
    list.vector = (int*) malloc(sizeof(int) * length);
    list.limit = length;
    list.start = -1;
    list.end = -1;

    return list;
}

int indexSucessor (int idx, int limit) {
    return idx + 1 >= limit ? 0 : idx + 1; 
}

int indexPredecessor (int idx, int limit) {
    return idx - 1 <= -1 ? limit - 1 : idx - 1; 
}

char insertStart(struct CircularList* list, int value) {

    if (isFull(*list)) return 0;

    list->vector[indexPredecessor(list->start, list->limit)] = value;
    if(isEmpty(*list)) list->end = indexPredecessor(list->end, list->limit);
    list->start = indexPredecessor(list->start, list->limit);

    return 1;
}

char insertEnd(struct CircularList* list, int value) {

    if (isFull(*list)) return 0;
    
    list->vector[indexSucessor(list->end, list->limit)] = value;
    if(isEmpty(*list)) list->start = indexSucessor(list->start, list->limit);
    list->end = indexSucessor(list->end, list->limit);
    return 1;
}

char isFull(struct CircularList list) {
    return indexSucessor(list.end, list.limit) == list.start;
}

char isEmpty(struct CircularList list) {
    return list.end == -1 && list.start == -1;
}

void delete(struct CircularList* list) {
    free(list->vector);
}

char removeStart(struct CircularList* list) {

    if (isEmpty(*list)) return 0;
    if (list->start == list->end) {
        list->end = -1;
        list->start = -1;
        return 1;
    }

    list->start = indexSucessor(list->start, list->limit);
    return 1;
}

char removeEnd(struct CircularList* list) {

    if (isEmpty(*list)) return 0;
    if (list->start == list->end) {
        list->end = -1;
        list->start = -1;
    }

    list->end = indexPredecessor(list->end, list->limit);
    return 1;
}

char show(struct CircularList list) {

    printf("\n[");

// quero printrar os elementos reais da lista, não lixo; 
// nao consegui por que o inicio e o fim da lista podem estar en qualquer posição 
// ai nao achei um padrão que mostrasse do start ao end, sem bugar ou dar loop infinito.

// tentativa bugada:
    // int i = list.start; 
    // if (i != -1) {
    //     do {
    //         printf("%d,", list.vector[i]);
    //         i = indexSucessor(i, list.limit);
    //     } while (i != list.end);

    //     printf("%d", list.vector[list.end]);
    // }


// iteração mostrando tudo, inclusive lixo ;-;
    if (list.start != -1) for ( int i = 0; i < list.limit ; i++) printf("%d,", list.vector[i]);

    printf("]\n");
    printf("{\n");
    printf("start : %d\n", list.start);
    printf("end : %d\n", list.end);
    printf("limit : %d\n", list.limit);
    printf("}\n");
}