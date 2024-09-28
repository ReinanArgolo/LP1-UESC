#include <stdlib.h>
#include <stdio.h>

int main() {
    float capital, taxa, juros;
    int dias;

    printf("Entre com o valor do emprestimo (0 para finalizar): ");
    scanf("%f", &capital);

    while (capital != 0) {
        if (capital == 0) {
            break;
        }

        printf("Entre a taxa de juros: ");
        scanf("%f", &taxa);
        printf("Digite o número de dias: ");
        scanf("%d", &dias);

        juros = capital * taxa * dias / 365;
        printf("Juros: %.2f\n", juros);

        printf("Digite o capital (0 para finalizar): ");
        scanf("%f", &capital);
    }
    
}