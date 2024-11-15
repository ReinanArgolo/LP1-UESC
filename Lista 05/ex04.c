#include <stdio.h>
#include <stdlib.h>
#define N 20

void buscarValor(int n, int vetor[]);

int main(void) {
    int valor;
    int vetor[N];

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 100; 
    }

    scanf("%d", &valor);

    buscarValor(valor, vetor);

    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    
}

void buscarValor(int valor, int vetor[]) {
    for(int i = 0; i < N; i++) {
        if(vetor[i] == valor) {
            printf("Valor %d encontrado! \nEle esta na posicao [%d]!\n", valor, i);
            return;
        }   
    }
    
    printf("Valor nao encontrado no vetor\n");
}