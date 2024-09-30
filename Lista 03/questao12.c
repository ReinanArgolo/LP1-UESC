#include <stdio.h>
#include <math.h>

int main() {
    int binario, decimal = 0, base = 1, resto;

    printf("Digite um numero binario: ");
    scanf("%d", &binario);

    while (binario > 0) {
        resto = binario % 10;
        decimal = decimal + resto * base;
        binario = binario / 10;
        base = base * 2;
    }

    printf("O valor decimal equivalente é: %d\n", decimal);

    return 0;
}