#include <stdio.h>
#define SIZE 50

void compactarVetor(int vetor[], int n);
void verificarZero(int vetor[]);
void imprimirVetor(int vetor[]);

int main(void) {
    int vetor[SIZE] = {
        3, 5, 0, 7, 2, 9, 1, 0, 4, 6,
        8, 0, 2, 5, 7, 1, 3, 0, 9, 4,
        6, 8, 2, 0, 5, 7, 1, 3, 9, 4,
        6, 8, 0, 2, 5, 7, 1, 3, 9, 4,
        6, 8, 2, 5, 0, 7, 1, 3, 9, 4
    };

    verificarZero(vetor);

    imprimirVetor(vetor);

    return 0;
}

void compactarVetor(int vetor[], int n) {
    for(int i = n; i < SIZE -1; i++) {
        vetor[i] = vetor[i+1];
        vetor[i+1] = 0;
    }
}

void verificarZero(int vetor[]) {
    for (int i = 0; i < SIZE; i++) {
        if(vetor[i] == 0) {
            compactarVetor(vetor, i);
        }
    }
}

void imprimirVetor(int vetor[]) {
    printf("{");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("}");
    
}