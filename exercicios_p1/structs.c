#include <stdio.h>

int main() {
   struct arr {
    int a ;
    int b ;
    int c ;

    int arr[3];
   };

    struct arr a123;

    a123.a = 1;
    a123.b = 2;
    a123.c = 3;

    a123.arr[2] = 11028;

    struct arr b123;

    struct arr somar(struct arr estrutura) {
        estrutura.a += 2;
        estrutura.b += 2;
        estrutura.c += 2;

        return estrutura;
    }

    b123 = somar(a123);

    printf("%d \n", b123.a);
    printf("%d \n", b123.b);
    printf("%d \n", b123.c);

    printf("%d \n", b123.arr[2]);

    

    void preenche(struct arr* estrutura) {
       for (int i = 0; i<3;i++) estrutura->arr[i] =  123;
    }

    preenche(&b123);

    for (int i = 0 ; i < 3 ; i ++) printf("%d\n",b123.arr[i]);

    
    
    return 0;
}