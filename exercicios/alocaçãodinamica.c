#include <stdio.h>

int main() {
char** casas = (char**) malloc(sizeof(char*)*4);

casas[0] = (char*) malloc(sizeof(char)*5);
casas[1] = (char*) malloc(sizeof(char)*10);
casas[2] = (int*) malloc(sizeof(int)*15);
casas[3] = (char*) malloc(sizeof(char)*20);

casas[1] = "oioi";
casas[2] = 5;

printf("%s %d", casas[1], casas[2]);

    return 0;
}