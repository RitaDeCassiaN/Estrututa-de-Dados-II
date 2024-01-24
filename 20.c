//Questao20

#include <stdio.h>

int soma_digitos(int num) {
    int soma = 0;
    while (num != 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    int soma = soma_digitos(num);
    printf("A soma dos dígitos de %d é %d.\n", num, soma);
    return 0;
}