#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4

void inverterValores(int [LIN][COL]);
void preencherMatriz(int m[LIN][COL]);
void imprimirMatriz(int matriz[LIN][COL]);

int main(void) {
    int matriz[LIN][COL];
    preencherMatriz(matriz);
    imprimirMatriz(matriz);
    inverterValores(matriz);
    printf("\n");
    imprimirMatriz(matriz);
}

void inverterValores(int m[LIN][COL]) {
    int v1[COL];
    int v2[LIN];

    for(int i = 0; i < COL; i++) {
        v1[i] = m[0][i];
        v2[i] = m[i][3];

        m[0][i] = v2[i];
        m[i][3] = v1[i];
    }
}

void preencherMatriz(int m[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for(int j=0; j<COL; j++) {
            m[i][j] = rand() % 100;
        }
    }
}

void imprimirMatriz(int matriz[LIN][COL]) {
    printf(" ");
    for (int i = 0; i < COL; i++)
        printf("%4d", i);
    printf("\n");
    for (int i = 0; i < LIN; i++) {
        printf("%2d", i);
        for (int j = 0; j < COL; j++) {
            printf(" %2d ", matriz[i][j]);  
        }
        printf("\n");
    }
}