#include <stdio.h>
#define SIZE 9

void preencherVetor(int[], int[], int);
void imprimirVetor(int vetor[]);

int main(void) {
    int v1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[SIZE] = {10, 11, 12, 13, 14, 15, 16, 17, 18};
    int v3[SIZE] = {20, 21, 22, 23, 24, 25, 26, 27, 28};
    int v4[SIZE];
    
    preencherVetor(v1, v4, 0);
    preencherVetor(v2, v4, 1);
    preencherVetor(v3, v4, 2);

    imprimirVetor(v4);
    
  }

void preencherVetor(int vetorOrign[], int vetorFinal[], int nV) {
    for (int i = nV * SIZE/3; i < nV * SIZE/3 +3; i++) {
        vetorFinal[i] = vetorOrign[i];
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