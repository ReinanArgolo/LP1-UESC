#include <stdlib.h>
#include <stdio.h>



int main() {
    float venda = 0, salario = 0;
    const float desconto = 0.09;

    printf("Digite o valor da venda (-1 para finalizar): ");
    scanf("%f", &venda);

    while (venda != -1) {
        if (venda == -1) {
            break;
        }

        salario = 200 + (venda * desconto);
        printf("Salário: %.2f\n", salario);

        printf("Digite o valor da venda (-1 para finalizar): ");
        scanf("%f", &venda);
    }

    

}