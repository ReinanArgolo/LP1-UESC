#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1, n2;   

    printf("Digite o n1: ");
    scanf("%d", &n1);
    printf("Digite o n2: ");
    scanf("%d", &n2);

    if(n1 > n2) {
        if (n1 % n2 == 0) {
            printf("%d e multiplo de %d\n", n1, n2);
        } else {
            printf("%d nao e multiplo de %d\n", n1, n2);
        }
    } else {
        if (n2 % n1 == 0) {
            printf("%d e multiplo de %d\n", n2, n1);
        } else {
            printf("%d nao e multiplo de %d\n", n2, n1);
        }
    }

    return 0;
}