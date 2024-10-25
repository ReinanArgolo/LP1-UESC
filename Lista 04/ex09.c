#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int sortearNumero();

int main() {
    setlocale(LC_ALL,"");

    int numRand, chute;

    srand(time(NULL));
    numRand = sortearNumero();

    printf("- - - - JOGO DE ADIVINHAÇÃO - - - -\n");
    printf("Tente acertar o número sorteado: ");
    scanf("%d", &chute);

    if (chute == numRand) {
        printf("Excelente! Você adivinhou o numero\n");
    }
    
    while(chute != numRand) {
        printf("Bem, nâo e isso. Tente acertar o número sorteado: ");
        scanf("%d", &chute);

        if(chute == numRand) {
            printf("Excelente! Você adivinhou o numero\n");
        } else if (chute > numRand) {
            printf("Muito Alto. Tente novamente\n");
        } else {
            printf("Muito Baixo. Tente novamente\n");
        }
    }
}

int sortearNumero() {
    return 1 + (rand() % 100);
}