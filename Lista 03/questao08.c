#include <stdlib.h>
#include <stdio.h>

int main() {
    int lado = 0;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    if (lado > 0 && lado <= 20) {
        for (int i = 0; i < lado; i++) {
            for (int j = 0; j < lado; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Valor inválido\n");
    }

    
}