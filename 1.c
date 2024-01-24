//Questao1

#include <stdio.h>

int main() {
    int n, i, soma = 0, valor;
    float media;

    printf("Digite o número de valores a serem inseridos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        soma += valor;
    }

    media = (float) soma / n;
    printf("A média é %.2f", media);

    return 0;
}
