//Questao25

#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else {
        return f(m, n - 1) + f(m - 1, n);
    }
}

int main() {
    int m = 0;
    int n = 0;
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("f(%d, %d) = %d\n", m, n, f(m, n));
    return 0;
}