//Questao2

#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    printf("Celsius\tFahrenheit\n");

    for (celsius = 30; celsius <= 50; celsius++) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
