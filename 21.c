//Questao21A

#include <stdio.h>

int mdc(int a, int b);

int main() {
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    printf("O MDC de %d e %d é %d\n", a, b, mdc(a, b));
    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}
