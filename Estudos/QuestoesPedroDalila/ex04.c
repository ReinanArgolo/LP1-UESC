#include <stdlib.h>
#include <stdio.h>
#define MAX 20

void preencherVetor(int vetorOrign[]);

int main(void) {
    int vetor[MAX], x;
    preencherVetor(vetor);
    printf("Digite X: \n");
    scanf("%d", &x);

    for(int i = 0; i < MAX; i++) {
        if(vetor[i] == x) {
            printf("Valor %d encontrado na posicao %d\n", x, i);
        }
    }

}

void preencherVetor(int vetorOrign[]) {
    for (int i = 0; i < MAX; i++) {
        vetorOrign[i] = rand() % 10;
    }
}