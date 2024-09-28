#include <stdlib.h>
#include <stdio.h>

int main() {

    float litros = 0, km = 0, sumLitros = 0, sumKm = 0;

    while (litros != -1) {

        printf("------MAPEAMENTO DE CONSUMO DE COMBUSTÍVEL------\n");

        printf("Digite a quantidade de litros nesse reabastecimento: ");
        scanf("%f", &litros);

        if (litros == -1) {
            break;
        }

        printf("Digite a quantidade de km rodados: ");
        scanf("%f", &km);

        if (litros <= 0 || km <= 0) {
            printf("Valores inválidos\n");
            continue;
        } else {
            sumLitros += litros;
            sumKm += km;
        }
       
    
        printf("A taxa de km/litro foi de %f\n", km / litros);
       
    }

    printf("A taxa média de km/litro foi de %f\n", sumKm / sumLitros);
}