#include <stdio.h>
#include <stdlib.h>

int fib(int);

void main(int argc, char *argv[])
{
    int termo = atoi(argv[1]);
    printf("%d\n", fib(termo));
    return;
}

int fib(int termo)
{
    int a = 0;
    int p = 1;
    while (termo > 0)
    {
        int temp = p;
        p = a + p;
        a = temp;
        termo--;
    }
    return p;
}

