#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int verificarIgauis(int[]);
void preencherVetor(int []);
void imprimirVetor(int vetor[]);

int main(void) {
    int vetor[SIZE];
    preencherVetor(vetor);
    if(verificarIgauis(vetor)) {
        printf("Existem Valores iguais no vetor\n");
    } else {
        printf("Nao existem valores iguis no vetor\n");
    }

    imprimirVetor(vetor);

}

void preencherVetor(int vetor[]) {
    for(int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 100;
    }
}

int verificarIgauis(int vetor[]) {
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++) {
            if(vetor[i] == vetor[j] && i != j) {
                return 1;
            } 
        }
    }

    return 0;
}

void imprimirVetor(int vetor[]) {
    printf("{");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("}");
    
}