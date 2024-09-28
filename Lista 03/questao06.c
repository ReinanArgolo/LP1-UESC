#include <stdlib.h>
#include <stdio.h>

int main() {
    int cont = 0, num, max;

    printf("Digite um número: ");
    scanf("%d", &num);

    max = num;

    while (cont < 9) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        cont++;
    }

    printf("O maior número é: %d\n", max);
}