//Questao8

#include <stdio.h>

int main() {
    int produto, quantidade;
    float total = 0.0;

    printf("Digite o número do produto e a quantidade vendida por dia (digite -1 para encerrar):\n");

    while (1) {
        scanf("%d", &produto);

        if (produto == -1) {
            break;
        }

        scanf("%d", &quantidade);

        switch (produto) {
            case 1:
                total += quantidade * 3.00;
                break;
            case 2:
                total += quantidade * 4.00;
                break;
            case 3:
                total += quantidade * 2.80;
                break;
            case 4:
                total += quantidade * 1.95;
                break;
            case 5:
                total += quantidade * 5.00;
                break;
            default:
                printf("Número de produto inválido.\n");
                break;
        }
    }

    printf("O valor total de varejo de todos os produtos vendidos na semana passada é R$%.2f.\n", total);

    return 0;
}
