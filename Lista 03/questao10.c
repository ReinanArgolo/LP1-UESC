#include <stdlib.h>
#include <stdio.h>

int main() {
    int num = 0;
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);

    if (num > 9999 && num < 100000) {
        int d1 = num / 10000;
        int d2 = num % 10000 / 1000;
        int d3 = num % 1000 / 100;
        int d4 = num % 100 / 10;
        int d5 = num % 10;

        if (d1 == d5 && d2 == d4) {
            printf("É palíndromo\n");
        } else {
            printf("Não é palíndromo\n");
        }
        
    } else {
        printf("Número inválido\n");
    }
}