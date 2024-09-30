#include <stdlib.h>
#include <stdio.h>

int main() {
    int n = 0, sum = 0, cont = 0;

    printf("Digite um Número: ");
    scanf("%d", &n);

    while(n != 9999) {
        sum += n;
        cont++;

        printf("Digite um Número: ");
        scanf("%d", &n);
    }

    printf("A media dos valores foi: %d", sum/cont);
}