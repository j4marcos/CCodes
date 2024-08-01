#include <stdio.h>
#include <math.h>

void area() {
    float lateral = 11;
    
    printf("a area eh %f, \n", pow(lateral,2));
}

double circulo(double raio) {
    return M_PI * pow(raio,2);
}

int main() {
    area();
    printf("area eh %f", circulo(2));
    return 0;
}