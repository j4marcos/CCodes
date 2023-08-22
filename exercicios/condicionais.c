#include <stdio.h>
#include <math.h>

#define false 0
#define true 1

typedef int boolean;

int valor = 123;
int condicao = 0;
boolean logico = 12 > 10;  
char carac = 't';

int um(int n)
{
    if (n == 1) return 10;
    return 11;
}

int main()
{
    if (condicao > -1) {
    printf("oioioiiioi %i \n",um(valor));}
    printf("valor logico é %i e o caractere é %c",logico,carac);
    return 0;
}m

