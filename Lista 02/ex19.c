#include <stdio.h>

int main(void) {
    int salario;
    float desconto, salarioLiquido;

    printf("Digite o salario: ");
    scanf("%d", &salario); 

    if(salario <= 4236) {
        desconto = salario * 0.08;
    } else if(salario >= 4236) {
        desconto = salario * 0.1;
    } else if(salario >= 10000) {
        desconto = salario * 0.3;
    }

    printf("Desconto: %.2f\n", desconto);
    salarioLiquido = salario - desconto;
    printf("Salario liquido: %.2f\n", salarioLiquido);

    return 0;
}