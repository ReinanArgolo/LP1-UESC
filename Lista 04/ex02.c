#include <stdio.h>

int potenciaInt(int base, int expoente);

int main(void) {
    int num = potenciaInt(3, 2);
    printf("%d", num);
}

int potenciaInt(int base, int expoente) {
    for(int i = 1; i<expoente; i++) {
        base *= base;
    }
    return base;
}