#include <stdio.h>

void imprimirInverso(int num) {
    int inverso = 0;
    while (num != 0) {
        inverso = inverso * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", inverso);
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    imprimirInverso(n);
}