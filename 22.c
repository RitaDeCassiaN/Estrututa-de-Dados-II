//Questao22

#include <stdio.h>

int produto(int x1, int x2) {
    if (x2 == 0) {
        return 0;
    } else {
        return x1 + produto(x1, x2 - 1);
    }
}

int main() {
    int x1 = 5;
    int x2 = 3;
    int y = produto(x1, x2);
    printf("O produto de %d e %d é %d.\n", x1, x2, y);
    return 0;
}