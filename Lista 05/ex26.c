#include <stdio.h>
#include <stdlib.h>
#define LIN 6
#define COL 6

void preencherMatriz(int matriz[LIN][COL]);
void processarMatriz(int matriz[LIN][COL]);
void imprimirMatriz(int matriz[LIN][COL]);

int main() {
    int matriz[LIN][COL];
    preencherMatriz(matriz);
    processarMatriz(matriz);
    imprimirMatriz(matriz);
    return 0;
}

void preencherMatriz(int m[][COL]) {
    for (int i = 0; i < LIN; i++) {
        for(int j=0; j<COL; j++) {
            m[i][j] = (rand() % 100) *-1;
        }
    }
}

void processarMatriz(int matriz[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if (i != j && i + j != LIN - 1 && matriz[i][j] < 0) {
                matriz[i][j] = 0;
            }
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