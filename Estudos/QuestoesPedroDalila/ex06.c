// Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores
// negativos.

#include <stdio.h>
#include <stdlib.h>
#define MAX 40

void preencherVetor(int vetorOrign[]);

int main(void) {

    int vetor[MAX];
    preencherVetor(vetor);

    for(int i = 0; i < MAX; i++) {
        if(vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    for(int i = 0; i < MAX; i++) {
        
        printf("%d\n",  vetor[i]);
    }



    
}

void preencherVetor(int vetorOrign[]) {
    for (int i = 0; i < MAX; i++) {
        vetorOrign[i] = (rand() % 100) - (RAND_MAX % 10);
    }
}