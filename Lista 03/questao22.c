#include <stdlib.h>
#include <stdio.h>

int main() {

    int sum = 0;
    for(int i = 2; i <= 30; i += 2) {
        sum+=i;
    }

    printf("A soma dos valores pares de 2 a 30 é: %d", sum);

}