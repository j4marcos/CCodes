#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fptr;
    char fileRow[100];
    // Open a file in read mode
    fptr = fopen("people.txt", "r");

    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        exit(1);
    }

    printf("the people of legal age are:\n");
    while (fgets(fileRow, 100, fptr))
    {
        char* name = fileRow;
        char ageString[10];
        fgets(ageString, 10, fptr);
        int age = atoi(ageString);
        if (age >= 18) printf("%s", name );
    }
    

    fclose(fptr);

    return;
}