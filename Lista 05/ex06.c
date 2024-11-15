#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 40

void gerarValores(int vetor[]);
int isNegative(int n);
void imprimirVetor(int vetor[]);

int main() {
    srand(time(NULL));

    int vetor[N];

    gerarValores(vetor);

    for (int i = 0; i < N; i++) {
        if(isNegative(vetor[i])) vetor[i] = 0;
    }

    imprimirVetor(vetor);

    return 0;
}

void gerarValores(int vetor[]) {
    for (int i = 0; i < N; i++) {
        vetor[i] = rand() - (RAND_MAX / 2);
    }
}

int isNegative(int n) {
    if(n < 0) return 1;
    else return 0;
}

void imprimirVetor(int vetor[]) {
    for (int i = 0; i < N; i++) {
        printf("%d \n", vetor[i]);
    }

}