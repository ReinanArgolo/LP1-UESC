#include <stdio.h>

int main(void) {
    int vetor[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Linha %d, Coluna %d\n", i+1, j+1);
            scanf("%d", &vetor[i][j]);
        }
    }
}