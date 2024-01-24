//Questao10

#include <stdio.h>

int main() {
    int n = 10; // número de termos
    double pi = 0.0;
    int i;
    int sinal = 1;

    for (i = 1; i <= n; i++) {
        pi += sinal * 4.0 / (2 * i - 1);
        sinal *= -1;
        printf("%d termos: %f\n", i, pi);
    }

    return 0;
}
