#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 100
#define COL 4

void preencherMatriz(char m[][COL], char []);
void imprimirMatriz(char matriz[LIN][COL]);  
void corrigirProvas(char m[][COL], char gabarito[], int []);
void imprimirNotas(int []);

int main(void) {
    srand(time(NULL));
    char gabarito[COL];
    char respostas[LIN][COL];
    int notas[LIN] = {0};
    preencherMatriz(respostas, gabarito);
    imprimirMatriz(respostas);
    corrigirProvas(respostas, gabarito, notas);
    imprimirNotas(notas);
}

void corrigirProvas(char m[][COL], char gabarito[], int notas[]) {
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if(m[i][j] == gabarito[j]) {
                notas[i]++;
                printf("%d\n", notas[i]);
            }
        }
    }
}

void imprimirNotas(int n[]) {
    for(int i = 0; i<LIN; i++) {
        printf("A nota do aluno %d foi: %.2f\n", i, n[i]*2.5);
    }
}


void preencherMatriz(char m[][COL], char gabarito[]) {
    for (int i = 0; i < LIN; i++) {
        gabarito[i] = (rand() % 4) + 65;
        for(int j=0; j<COL; j++) {
            m[i][j] = (rand() % 4) + 65;
        }
    }
}

void imprimirMatriz(char matriz[LIN][COL]) {
    printf(" ");
    for (int i = 0; i < COL; i++)
        printf("%4d", i);
    printf("\n");
    for (int i = 0; i < LIN; i++) {
        printf("%2d", i);
        for (int j = 0; j < COL; j++) {
            printf(" %c ", matriz[i][j]);  
        }
        printf("\n");
    }
}