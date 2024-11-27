#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

void preencherMatriz(int m[LIN][COL]);
void imprimirMatriz(int matriz[LIN][COL]);

void transformarMatriz(int m[LIN][COL]);

int main(void) {
   int matriz[LIN][COL];

   preencherMatriz(matriz);
   imprimirMatriz(matriz); 
   transformarMatriz(matriz);
   printf("\n");
   imprimirMatriz(matriz); 

}


void transformarMatriz(int m[LIN][COL]){

    int MatrizAux[LIN][COL];

    for(int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if(i < j) {
                MatrizAux[j][i] = m[i][j];
            } else if (i > j) {
                MatrizAux[j][i] = m[i][j];
            } else {
                MatrizAux[i][j] = m[i][j];
            }
        }
    }

    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            m[i][j] = MatrizAux[i][j];
        }
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