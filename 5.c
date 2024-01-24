//Questao5

#include <stdio.h>

int main()
{
    int i, n;
    int sum = 0, sum_squares = 0, sum_cubes = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
        sum_squares += i * i;
        sum_cubes += i * i * i;
    }

    printf("A soma dos números naturais de 1 até %d é %d.\n", n, sum);
    printf("A soma dos quadrados dos números naturais de 1 até %d é %d.\n", n, sum_squares);
    printf("A soma dos cubos dos números naturais de 1 até %d é %d.\n", n, sum_cubes);

    return 0;
}
