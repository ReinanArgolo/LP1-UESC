#include <stdlib.h>
#include <stdio.h>

int main() {

    float capital, taxa, juros;
    int dias;

    printf("Entre com o valor do emprestimo: ");
    scanf("%f", &capital);
    printf("Digite o número de dias: ");
    scanf("%d", &dias);

    for (taxa = 5; taxa <= 10; taxa++) {
        juros = capital * (taxa / 100) * dias / 365;
        printf("Juros para taxa %.0f%%: %.2f\n", taxa, juros);
    }
}