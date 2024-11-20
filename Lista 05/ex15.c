#include <stdio.h>
#define SIZE 9

void lerVetor(int vetor[], int indice);

int main(void) {
    int vetor[SIZE] = {5, 7, 6, 9, 2, 8, 4, 0, 3};

    lerVetor(vetor, 1);

}

void lerVetor(int vetor[], int indice) {
    printf("%d ", indice);
    if(vetor[indice-1]==0) {  
        printf("%d ", vetor[indice-1]);
        return;  
    }
    lerVetor(vetor, vetor[indice-1]);
}