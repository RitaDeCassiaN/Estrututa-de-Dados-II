//Questao14

#include <stdio.h>
#include <math.h>

double hipotenusa(double cateto1, double cateto2) {
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

int main() {
    double cateto1, cateto2, h;
    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%lf", &cateto1);
    printf("Digite o comprimento do segundo cateto: ");
    scanf("%lf", &cateto2);
    h = hipotenusa(cateto1, cateto2);
    printf("A hipotenusa é: %.2f", h);
    return 0;
}
