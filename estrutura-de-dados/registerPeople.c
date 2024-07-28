#include <stdio.h>
#include <string.h>

void main() {
    printf("escreva um nome na linha, e a sua idade na linha abaixo. e repita o processo para todas as pessoas que deseja cadastar\n");
    printf("exemplo:\n");
    printf("maria rodrigues peixoto\n");
    printf("58\n");
    printf("mario da silva souza\n");
    printf("24\n");
    printf("ednaldo pereira de barros");
    printf("13\n");
    printf("agora digite o nome e idade das pessoas que deseja registrar: (digite 0 no nome para finalizar o programa)\n\n");

    FILE *fptr;
    fptr = fopen("people.txt", "w");
    while (1) {
       char fullName[100];
       char age[10];
       fgets(fullName, sizeof(fullName), stdin);

       if (strcmp(fullName, "0\n") == 0) {
            printf("pessoas salvas em 'people.txt'");
            fclose(fptr);
            return;
        }
        fgets(age, sizeof(age), stdin);

        

       fprintf(fptr, "%s", fullName);
       fprintf(fptr, "%s",  age);
    }
}