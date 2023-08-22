// corta casas decimais sem arredondar
#include <stdio.h>
#include <math.h>

double cortar(double valor, int casas) {
    double novoValor = (int) (valor*pow(10,casas));
    return novoValor/(pow(10,casas));
}


int main(){
    
    printf("%f",cortar(1.33333333, 2));
    return 0;
}
