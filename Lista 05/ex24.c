#include <stdio.h>
#include <stdlib.h>
#define COL 8
#define LIN 8 

int inverterDiagonalPrinc(int [][COL]);
void imprimirMatriz(int [][COL]);
void preencherMatriz(int [][COL]);


int main(void) {
    int matriz[LIN][COL];

    preencherMatriz(matriz);
    printf("Matriz antes: \n");
    imprimirMatriz(matriz);
    inverterDiagonalPrinc(matriz);
    printf("Matriz depois: \n");
    imprimirMatriz(matriz);

    return 0;
}

int inverterDiagonalPrinc(int m[][COL]) {
    int t;

    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if(i == j) {
                t = m[i][COL - 1 - i];
                m[i][COL - 1 - i] = m[i][j];
                m[i][j] = t; 
            } 
        }
    }

}

void imprimirMatriz(int matriz[][COL]) {
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

void preencherMatriz(int m[][COL]) {
    for (int i = 0; i < LIN; i++) {
        for(int j=0; j<COL; j++) {
            m[i][j] = rand() % 100;
        }
    }
}