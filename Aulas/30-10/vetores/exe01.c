#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
    int i, n[N] = {32, 27, 64, 18, 95}, soma = 0;

    int c[10];

    printf("Endereco do array %p\n", c);
    printf("Memoria em bytes %d\n", sizeof(c));

    exit(-1);


    printf("%d", n);

    for (int i = 0; i < N; i++) {
        printf("digite o elemento %d: ", i);
        scanf("%d", &n[i]);
    }
    
    for(i = 0; i< N; i++) {
        soma += n[i];
    }

    printf("%s%13s\n", "Elemento", "Valor");
    for(i = 0; i <N; i++) {

        printf("%7d%13d\n", i, n[i]);
    }

    printf("Soma: %d\n", soma);

    return 0;
}