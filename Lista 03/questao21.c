#include <stdio.h>

int main() {
    int prod = 1;

    for (int i = 1; i <= 15; i += 2) {
        prod *= i;
    }

    printf("O produto dos números ímpares entre 1 e 15 é: %d\n", prod);

    return 0;
}