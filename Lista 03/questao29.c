#include <stdio.h>

float CalculaTaxas(int horas) {
    if (horas <= 3) {
        return 2.00;
    } else if (horas < 24) {
        float taxa = 2.00 + (horas - 3) * 0.50;
        return (taxa > 10.00) ? 10.00 : taxa;
    } else {
        return 10.00;
    }
}

int main() {
    int n, horas;
    float taxa, total = 0.0;

    printf("Digite o número de clientes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite as horas estacionadas pelo cliente %d: ", i);
        scanf("%d", &horas);

        taxa = CalculaTaxas(horas);
        total += taxa;

        printf("Cliente\tHoras\tTaxa\n");
        printf("%d\t%d\t%.2f\n", i, horas, taxa);
    }

    printf("Total recebido: R%.2f\n", total);

    return 0;
}