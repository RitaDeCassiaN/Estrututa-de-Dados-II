//Questao3

#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            sum += i;
        }
    }

    printf("A soma de todos os múltiplos de 7 de 1 a 100 é: %d", sum);

    return 0;
}
