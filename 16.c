//Questao16

#include <stdio.h>

void exibir_retangulo(int lado1, int lado2, char caractere) {
    for (int i = 0; i < lado2; i++) {
        for (int j = 0; j < lado1; j++) {
            printf("%c ", caractere);
        }
        printf("\n");
    }
}

int main() {
    int lado1 = 4;
    int lado2 = 5;
    char caractere;

    printf("Digite o caractere que deseja imprimir: ");
    scanf("%c", &caractere);

    exibir_retangulo(lado1, lado2, caractere);

    return 0;
}