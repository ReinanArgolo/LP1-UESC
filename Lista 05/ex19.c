#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void preencherMatriz(int m[SIZE][SIZE]);
void contarValores(int*, int [SIZE][SIZE]);
void imprimirMatriz(int matriz[SIZE][SIZE]);

int main(void) {
    int matriz[SIZE][SIZE];
    int contador = 0;

    preencherMatriz(matriz);
    contarValores(&contador, matriz);
    imprimirMatriz(matriz);

    printf("Existem %d valores maiores que 10 na Matriz\n", contador);
}

void preencherMatriz(int m[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            m[i][j] = rand() % 100;
        }
    }
}

void contarValores(int *cont, int m[SIZE][SIZE]) {

    for (int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(m[i][j] > 10) (*cont)++;
        }
    }
    
}

void imprimirMatriz(int matriz[SIZE][SIZE]) {
    printf(" ");
    for (int i = 0; i < SIZE; i++)
        printf("%4d", i);
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d", i);
        for (int j = 0; j < SIZE; j++) {
            printf(" %2d ", matriz[i][j]);  
        }
        printf("\n");
    }
    
}