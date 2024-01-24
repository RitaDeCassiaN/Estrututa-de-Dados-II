//Questao23

#include <stdio.h>

int inverte(int n) {
    if (n < 10) {
        return n;
    } else {
        int ultimo_digito = n % 10;
        int resto_do_numero = n / 10;
        int numero_invertido = inverte(resto_do_numero);
        int numero_com_ultimo_digito_na_frente = ultimo_digito * potencia_de_10(resto_do_numero);
        return numero_com_ultimo_digito_na_frente + numero_invertido;
    }
}

int potencia_de_10(int n) {
    if (n < 10) {
        return 10;
    } else {
        return 10 * potencia_de_10(n / 10);
    }
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    int numero_invertido = inverte(n);
    printf("O número %d invertido é %d.\n", n, numero_invertido);
    return 0;
}