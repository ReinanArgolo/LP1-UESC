#include <stdio.h>
#include <stdlib.h>
#define COL 8
#define LIN 8 

int somarDiagonais(int [][COL], int *, int *);
void imprimirMatriz(int [][COL]);
void preencherMatriz(int [][COL]);

int main(void) {
    int matriz[LIN][COL];
    int somaD1 = 0;
    int somaD2 = 0;

    preencherMatriz(matriz);
    imprimirMatriz(matriz);
    somarDiagonais(matriz, &somaD1, &somaD2);
    printf("A soma da diagonal principal: %d\n", somaD1);
    printf("A soma da diagonal secundária: %d\n", somaD2);

    return 0;
}

int somarDiagonais(int m[][COL], int *soma1, int *soma2) {

    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if(i == j) {
                (*soma1) += m[i][j];
                (*soma2) += m[i][COL - 1 - i];
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