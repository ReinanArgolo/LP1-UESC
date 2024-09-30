#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, sum = 0, seqLen;

    printf("Digite um número: ");
    scanf("%d", &n);

    sum = n;
    seqLen = n;

    for(int i = 0; i <= seqLen - 2; i++) {
        printf("Digite outro número: ");
        scanf("%d", &n);
        sum += n;
    }

    printf("A soma dos valores digitados foi: %d", sum);

}