//Questao19AEB

#include <stdio.h>
#include <math.h>

int temRaizesReais(int a, int b, int c) {
    int delta = b * b - 4 * a * c;
    if (delta >= 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c;
    float x1, x2;
    printf("Digite os coeficientes da função do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);
    if (temRaizesReais(a, b, c)) {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("As raízes reais da função são: %.2f e %.2f\n", x1, x2);
    } else {
        printf("A função não tem raízes reais.\n");
    }
    return 0;
}
