#include <stdio.h>
#include <stdlib.h>
#define N 40

void contarPares(int vetor[], int *contador);

int main() {
    int numeros[N];
    int contador = 0;

    for(int i = 0; i < N; i++) {
        numeros[i] = rand() % 100;
    }

    contarPares(numeros, &contador);

    printf("há %d pares no vetor\n", contador);

}

void contarPares(int vetor[], int *contador) {
    for(int i = 0; i < N; i++) {
        if(vetor[i] % 2 == 0) (*contador)++;
    }
}

