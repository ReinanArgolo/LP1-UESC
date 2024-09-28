#include <stdlib.h>
#include <stdio.h>

int main () {
    int horasTrabvalhadas = 0;
    float salarioHora = 0, salario = 0;

    printf("Digite o valor do salário por hora (-1 para finalizar): ");
    scanf("%f", &salarioHora);

    while(salarioHora != -1) {
        if (salarioHora == -1) {
            break;
        }

        printf("Digite o número de horas trabalhadas: ");
        scanf("%d", &horasTrabvalhadas);

        if (horasTrabvalhadas > 40) {
            salario = 40 * salarioHora + (horasTrabvalhadas - 40) * salarioHora * 1.5;
        } else {
            salario = horasTrabvalhadas * salarioHora;
        }

        printf("Salário: %.2f\n", salario);

        printf("Digite o valor do salário por hora (-1 para finalizar): ");
        scanf("%f", &salarioHora);
    }
}