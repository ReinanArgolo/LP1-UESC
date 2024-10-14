#include <stdio.h>

int quadrado(int); // protótipo da função

int main(void) {
    int i;

    for(i=1; i<=10; i++) {
        printf("%d ", quadrado(i)); // chamada da função
    }

    printf("\n"); 

    return 0;
}

// definição da função
int quadrado(int x) {
    return x * x;
}