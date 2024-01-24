//Questao17

#include <stdio.h>
#include <stdlib.h>

int segundos_desde_12(int horas, int minutos, int segundos) {
    int total_segundos = 0;
    if (horas >= 12) {
        horas -= 12;
    }
    total_segundos += horas * 3600;
    total_segundos += minutos * 60;
    total_segundos += segundos;
    return total_segundos;
}

int main() {
    int horas1, minutos1, segundos1, horas2, minutos2, segundos2;
    printf("Digite o primeiro tempo no formato horas:minutos:segundos: ");
    scanf("%d:%d:%d", &horas1, &minutos1, &segundos1);
    printf("Digite o segundo tempo no formato horas:minutos:segundos: ");
    scanf("%d:%d:%d", &horas2, &minutos2, &segundos2);
    int segundos_desde_12_1 = segundos_desde_12(horas1, minutos1, segundos1);
    int segundos_desde_12_2 = segundos_desde_12(horas2, minutos2, segundos2);
    int diferenca = abs(segundos_desde_12_1 - segundos_desde_12_2);
    printf("A quantidade de tempo em segundos entre os dois tempos, ambos dentro de um ciclo de 12 horas do relógio, é de %d segundos.\n", diferenca);
    return 0;
}