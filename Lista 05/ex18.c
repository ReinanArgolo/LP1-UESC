#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void preencherMatriz(int m[SIZE][SIZE]);
void verificarMaiores(int [SIZE][SIZE], int [SIZE][SIZE], int [SIZE][SIZE]);
void imprimirMatriz(int [SIZE][SIZE]);

int main(void) {
    int m1[SIZE][SIZE];
    int m2[SIZE][SIZE];
    int m3[SIZE][SIZE];

    preencherMatriz(m1);
    preencherMatriz(m2);

    // imprimirMatriz(m1);

    verificarMaiores(m3, m1, m2);

    imprimirMatriz(m3);


}

void preencherMatriz(int m[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            m[i][j] = rand() % 10;
        }
    }
}

void verificarMaiores(int m[SIZE][SIZE], int m1[SIZE][SIZE],int m2[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if (m1[i][j] > m2[i][j]) {
                m[i][j] = m1[i][j];
            } else {
                m[i][j] = m2[i][j];
            } 
        }
    }
}

void imprimirMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);  
        }
        printf("\n");
    }
    
}