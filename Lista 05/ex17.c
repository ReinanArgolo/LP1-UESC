#include <stdio.h>
#define COL 5 
#define LIN 5

void preencherMatriz(int m[LIN][COL]);

int main(void) {
    int matriz[LIN][COL];
    preencherMatriz(matriz);
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void preencherMatriz(int m[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if (j==i) m[i][j] = 1;
            else m[i][j] = 0;
        }
    }   
}