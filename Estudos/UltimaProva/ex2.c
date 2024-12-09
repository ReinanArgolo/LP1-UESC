#include <stdio.h>
#define MAX 8

int main(void) {
    int vetor[MAX] = {32, 45, 67, 2, 89, 17, 33, 85};
    int aux;

    for(int k=0; k<MAX; k++) printf("%4d", vetor[k]);
    printf("\n");

    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX - i - 1; j++) {
            if(vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for(int k=0; k<MAX; k++) printf("%4d", vetor[k]);
    printf("\n");
 
}