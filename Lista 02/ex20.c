#include <stdlib.h>
#include <stdio.h>

int main(void) {
    float salario = 0, aliquota = 0, descAliquota, desconto = 0, salarioLiquido = 0;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario >= 0 && salario <= 900) {
        printf("Isento de imposto de renda\n");
    } else if (salario > 900.1 && salario <= 1800) {
        aliquota = 0.15;
        descAliquota = salario * aliquota;
        desconto = salario - descAliquota;
        salarioLiquido = salario - desconto;
        printf("Desconto: %.2f\n", desconto);
        printf("Salario liquido: %.2f\n", salarioLiquido);
    } else {
        aliquota = 0.275;
        descAliquota = salario * aliquota;
        desconto = salario - descAliquota;
        salarioLiquido = salario - desconto;
        printf("Desconto: %.2f\n", desconto);
        printf("Salario liquido: %.2f\n", salarioLiquido);
    }
    
}

