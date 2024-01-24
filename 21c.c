//Questao21C

#include <stdio.h>

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    unsigned long long n = 10; // número de termos da série de Fibonacci
    unsigned long long i;

    printf("Série de Fibonacci:\n");

    for (i = 0; i < n; i++) {
        printf("%llu ", fibonacci(i));
    }

    return 0;
}