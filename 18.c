//Questao18

#include <stdio.h>

int isPerfect(int n);

int main() {
    int i, j;
    printf("Números perfeitos entre 1 e 1000:\n");
    for (i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d = ", i);
            for (j = 1; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf("%d", j);
                    if (j != i / 2) {
                        printf(" + ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}

int isPerfect(int n) {
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}
