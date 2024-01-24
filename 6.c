//Questao6

#include <stdio.h>

int main()
{
    int i, j, n;
    unsigned long long factorial;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Tabela de fatoriais de 1 a %d:\n", n);
    printf("+----+-----------------------+\n");
    printf("| n  | Fatorial de n          |\n");
    printf("+----+-----------------------+\n");

    for (i = 1; i <= n; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("| %-2d | %-21llu |\n", i, factorial);
    }

    printf("+----+-----------------------+\n");

    return 0;
}
