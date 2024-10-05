#include <stdio.h>

int main() {
    int numero = 7631, invertido = 0;
    int temp = numero;

    while (temp != 0) {
        invertido = invertido * 10 + temp % 10;
        temp /= 10;
    }

    printf("Número invertido: %d\n", invertido);
    return 0;
}
