//Questao21D

#include <stdio.h>

int isPrime(unsigned long long n, unsigned long long i) {
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }
    if (n % i == 0) {
        return 0;
    }
    if (i * i > n) {
        return 1;
    }
    return isPrime(n, i + 1);
}

int main() {
    unsigned long long n = 17; // número a ser verificado
    if (isPrime(n, 2)) {
        printf("%llu é um número primo.\n", n);
    } else {
        printf("%llu não é um número primo.\n", n);
    }
    return 0;
}