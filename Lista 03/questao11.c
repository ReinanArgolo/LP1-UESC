#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, contN = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Os digitos de %d sao: \n", n);

    int div = 1;

    for (int i = 1; i < contN; i++) {
        div *= 10;
    }

    while (div > 0) {
        int digito = n / div;
        printf("%d\n", digito);
        n = n % div;
        div = div / 10;
    }
}