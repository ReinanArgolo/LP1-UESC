#include <stdlib.h>
#include <stdio.h>

int main(void) {

    float massaInicial, massa = 0.0;
    int tempo = 0;
    printf("Digite a massa inicial: ");
    scanf("%f", &massaInicial);
    massa = massaInicial;


    while (massa >= 0.5) {
        massa = massa / 2;
        tempo += 50;
    }

    printf("Massa inicial: %f\n", massaInicial);
    printf("Massa final: %.2f\n", massa);
    printf("Tempo: %02d:%02d:%02d\n", tempo / 3600, (tempo % 3600) / 60, tempo % 60);
    
}