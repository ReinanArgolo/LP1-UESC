#include <stdio.h>
#include <math.h>

int calcularHipotenusa(int cateto1, int cateto2);

int main() {
    int cat1, cat2;
    printf("Digite o valor do primeiro cateto: ");
    scanf("%d", &cat1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%d", &cat2);
    printf("O valor da hipotenusa é: %d", calcularHipotenusa(cat1, cat2));
}


int calcularHipotenusa(int cateto1, int cateto2) {
    return sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
}