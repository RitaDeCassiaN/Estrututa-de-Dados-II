//Questao11

#include <stdio.h>
#include <math.h>

int main() {
    int n = 10; // valor máximo para os lados
    int a, b, c;

    for (c = 1; c <= n; c++) {
        for (b = 1; b < c; b++) {
            for (a = 1; a < b; a++) {
                if (a*a + b*b == c*c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
