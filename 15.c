//Questao15

#include <stdio.h>

void exibir_retangulo(int lado1, int lado2) {
    for (int i = 0; i < lado2; i++) {
        for (int j = 0; j < lado1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    exibir_retangulo(4, 5);
    return 0;
}