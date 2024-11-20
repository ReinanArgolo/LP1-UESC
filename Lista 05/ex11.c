#include <stdio.h>
#define SIZE 4

void verificarRepeticao(char *vetor, int *freq);
int eAnagrama(char *vetor1, char *vetor2);

int main() {
    char vetor1[SIZE], vetor2[SIZE];

    printf("Entre com o priemro Vetor: \n");
    for (int i = 0; i < SIZE; i++) {
        scanf(" %c", &vetor1[i]);
    }

    printf("Entre com o Segundo vetor: \n");
    for (int i = 0; i < SIZE; i++) {
        scanf(" %c", &vetor2[i]);
    }

    if (eAnagrama(vetor1, vetor2)) {
        printf("Os vetores sao anagramas\n");
    } else {
        printf("Os vetores Nao sao anagramas\n");
    }

    return 0;
}


void verificarRepeticao(char *vetor, int *freq) {
    for (int i = 0; i < SIZE; i++) {
        freq[vetor[i] - 'A']++;
    }
}

int eAnagrama(char *vetor1, char *vetor2) {
    int freq1[26] = {0};
    int freq2[26] = {0};

    verificarRepeticao(vetor1, freq1);
    verificarRepeticao(vetor2, freq2);

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return 0;
        }
    }

    return 1;
}