//Questao26

#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m = 0;
    int n = 0;
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("A(%d, %d) = %d\n", m, n, ackermann(m, n));
    return 0;
}