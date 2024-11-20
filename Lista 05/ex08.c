#include <stdio.h>
#define SIZE_VETOR 40


void somarVetor(int []);
void preencherVetor(int []);
void imprimirVetor(int []);

int main(void) {
    
    int vetor[SIZE_VETOR];
    preencherVetor(vetor);
    printf("Vetor: 01\n");
    imprimirVetor(vetor);
    somarVetor(vetor);
    printf("Vetor: 02\n");
    imprimirVetor(vetor);

    
    
    return 0;
}

void somarVetor(int vetor[]) {
    for (int i = 0; i < SIZE_VETOR - 1; i++) {
        vetor[i+1] += vetor[i];
    }
}

void preencherVetor(int vetor[]) {
    for(int i = 0; i < SIZE_VETOR; i++) {
        vetor[i] = i;
    }
}

void imprimirVetor(int vetor[]) {
    for(int i = 0; i < SIZE_VETOR; i++) {
        printf("%d ", vetor[i]);
    }


    printf("\n");
}