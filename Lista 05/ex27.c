#include <stdio.h>
#include <stdlib.h>
#define LIN 50
#define COL 2

void imprimirMatriz(int [][COL]);
void preencherMatriz(int [][COL]);
void calcularTriangulos(int [][COL], int []);
void imprimirAreas(int []);

int main(void) {

    int triangulos[LIN];
    int dadosTriangulos[LIN][COL];
    preencherMatriz(dadosTriangulos);
    calcularTriangulos(dadosTriangulos, triangulos);
    imprimirAreas(triangulos);


}

void calcularTriangulos(int m[][COL], int triangulos[]) {
    int soma = 0;
    for(int i = 0; i < LIN; i++) {
        triangulos[i] = (m[i][0] * m[i][1])/2;
    }
}

void imprimirAreas(int t[]) {
    for(int i = 0; i < LIN; i++) 
        printf("A area do tringulo %d e: %dcm^2 \n", i, t[i]);
}



void preencherMatriz(int m[][COL]) {
    for (int i = 0; i < LIN; i++) {
        for(int j=0; j<COL; j++) {
            m[i][j] = (rand() % 100);
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