#include <stdio.h>
#include <stdlib.h>
#define LIN 20
#define COL 20

void verificarValores(int n, int m2[][COL]);
void preencherMatriz(int m[][COL]);
void percorrerMatriz(int m1[][COL], int m2[][COL]);

int main(void) {
    int matriz1[LIN][COL];
    int matriz2[LIN][COL];

    preencherMatriz(matriz1);
    preencherMatriz(matriz2);

    percorrerMatriz(matriz1, matriz2);


}

void verificarValores(int n, int m2[][COL]) {
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if(m2[i][j] == n)
                printf("Numero %d, encontrado na posicao i: %d; j: %d\n", m2[i][j], i, j);
        }
    }
}

void preencherMatriz(int m[][COL]) {
    for (int i = 0; i < LIN; i++) {
        for(int j=0; j<COL; j++) {
            m[i][j] = (rand() % 100);
        }
    }
}

void percorrerMatriz(int m1[][COL], int m2[][COL]) {
    for(int i = 0; i < LIN; i++) {
       for(int j = 0; j < COL; j++) {
            verificarValores(m1[i][j], m2);
       }
    }

}
