#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {

            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");

        }
        printf("\n");
    }

    printf("\n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");

        }
        for (j = 1; j <= i; j++) {
            printf("*");
            
        }
        printf("\n");
    }

    printf("\n");

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}