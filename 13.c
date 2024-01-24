//Questao13
#include <stdio.h>
#include <time.h>

int main() {
    struct tm date = {0};
    char day[20];

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &date.tm_mday, &date.tm_mon, &date.tm_year);

    date.tm_mon -= 1;
    date.tm_year -= 1900;

    mktime(&date);
    strftime(day, sizeof(day), "%A", &date);

    printf("O dia da semana para a data inserida é: %s\n", day);

    return 0;
}