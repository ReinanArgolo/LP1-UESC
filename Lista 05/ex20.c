#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void preencherMatriz(int m[SIZE][SIZE]);
void imprimirMatriz(int matriz[SIZE][SIZE]);
void procurarValor(int [SIZE][SIZE], int);

int main(void) {
    int matriz[SIZE][SIZE];
    int n;
    
    preencherMatriz(matriz);
    scanf("%d", &n);
    procurarValor(matriz, n);

    imprimirMatriz(matriz);

    


}

void preencherMatriz(int m[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            m[i][j] = rand() % 100;
        }
    }
}


void imprimirMatriz(int matriz[SIZE][SIZE]) {
    printf(" ");
    for (int i = 0; i < SIZE; i++)
        printf("%4d", i);
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d", i);
        for (int j = 0; j < SIZE; j++) {
            printf(" %2d ", matriz[i][j]);  
        }
        printf("\n");
    }
}

void procurarValor(int m[SIZE][SIZE], int x) {
    for (int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(m[i][j] == x) {
                printf("Valor encontrado na posicao i = %d, j = %d\n", i, j);
                return;
            }
        }
    }
    
    printf("Valor n encontrado");

}