#include <stdio.h>

void desenharQuadrado(int tipo, int tamanho);

int main() {
    int tipo, tamanho;

    printf("Digite 0 para quadrado vazado ou 1 para quadrado cheio: ");
    scanf("%d", &tipo);
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &tamanho);

    desenharQuadrado(tipo, tamanho);

    return 0;
}

void desenharQuadrado(int tipo, int tamanho) {
    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (tipo == 1 || i == 0 || i == tamanho - 1 || j == 0 || j == tamanho - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}