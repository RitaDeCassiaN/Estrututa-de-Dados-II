//Questao24

#include <stdio.h>

int somatorio(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somatorio(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    int resultado = somatorio(n);
    printf("O somatório de 1 até %d é %d.\n", n, resultado);
    return 0;
}
