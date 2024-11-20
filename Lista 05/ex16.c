#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void preencherMatriz(int [SIZE][SIZE]);
int verificarMaior(int [SIZE][SIZE]);


int main(void) {
    int matriz[SIZE][SIZE];

    preencherMatriz(matriz);
    printf("O maior valor e: %d", verificarMaior(matriz));
}

void preencherMatriz(int matriz[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() % 100;
        }
    }
}

int verificarMaior(int matriz[SIZE][SIZE]) {
    int maior = matriz[0][0];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(maior < matriz[i][j]) maior = matriz[i][j];
        }
    }

    return maior;
}