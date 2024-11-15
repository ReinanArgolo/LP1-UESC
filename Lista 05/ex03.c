#include <stdio.h>

#define N 16 // Defina o tamanho do vetor

int main() {
    int vetor[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; // Inicialize o vetor com valores
    int vetorAux1[N / 2 + 1];
    int vetorAux2[N / 2];

    for (int i = 0; i < N / 2 + 1; i++) {
        vetorAux1[i] = vetor[i];
    }

    printf("VETOR AUX1: \n");
    for (int i = 0; i < N / 2 + 1; i++) {
        printf("%d\n", vetorAux1[i]);
    }

    for (int i = 0; i < N / 2; i++) {
        vetorAux2[i] = vetor[N / 2 + i];
    }

    printf("VETOR AUX2: \n");
    for (int i = 0; i < N / 2; i++) {
        printf("%d\n", vetorAux2[i]);
    }

    for (int i = 0; i < N / 2; i++) {
        vetor[i] = vetorAux2[i];
    }
    for (int i = 0; i < N / 2 + 1; i++) {
        vetor[i + N / 2] = vetorAux1[i];
    }

    printf("VETOR FINAL: \n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}