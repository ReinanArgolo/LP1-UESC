#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1, n2, n3;

    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    printf("Digite o valor de n3: ");
    scanf("%d", &n3);

    int soma = n1 + n2 + n3;
    int media = soma / 3;

    printf("Media: %d\n", media);

}