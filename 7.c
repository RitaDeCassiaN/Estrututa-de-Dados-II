//Questao7

#include <stdio.h>

int main()
{
    int i, j, n;

    for (i = 1; i <= 5; i++) {
        printf("Digite um número entre 1 e 30: ");
        scanf("%d", &n);

        if (n < 1 || n > 30) {
            printf("Número inválido. Tente novamente.\n");
            i--;
            continue;
        }

        printf("Linha de asteriscos para %d: ", n);
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
