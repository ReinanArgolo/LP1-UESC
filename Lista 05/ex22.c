#include <stdio.h>
#include <stdlib.h>
#define LIN 8
#define COL 8

void preencherMatriz(int m[LIN][COL]);
void imprimirMatriz(int matriz[LIN][COL]);

void transformarMatriz(int m[LIN][COL]);

int main(void) {
   int matriz[LIN][COL];

   preencherMatriz(matriz);
   transformarMatriz(matriz);
   imprimirMatriz(matriz); 

}


void transformarMatriz(int m[LIN][COL]){

    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if(i<j){
                m[i][j] = 0;
            }
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