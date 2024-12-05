#include <stdio.h>
#define MAX 4

int percorrerVetor(char v1[], char v2[]);

int main(void) {
    char vetor[MAX];
    char vetor2[MAX];

    printf("Escreva uma palavra: \n");

    for(int i = 0; i < MAX; i++) {
       scanf(" %c", &vetor[i]);
    }

    printf("Escreva uma palavra: \n");

    for(int i = 0; i < MAX; i++) {
       scanf(" %c", &vetor2[i]);
    }

    percorrerVetor(vetor, vetor2);
    
}

int percorrerVetor(char v1[], char v2[]) {
    for(int i = 0, j = MAX - 1 ; i < MAX && j >= 0; i++, j--) {
        if (v1[i] != v2[j]) {
            printf("nao eh palindromo");
            return 0;
        }
    }
    printf("Eh palindromo");
    return 1;
}



