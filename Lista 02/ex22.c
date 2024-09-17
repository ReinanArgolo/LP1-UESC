#include <stdio.h>

int main() {
    int num, num1, num2, sum;

    printf("Digite um número de quatro algarismos: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("O número deve ter quatro algarismos.\n");
    } else {
        num1 = num / 100;
        num2 = num % 100;
        sum = num1 + num2;

        if (sum * sum == num) {
            printf("O número %d possui a propriedade especial.\n", num);
        } else {
            printf("O número %d não possui a propriedade especial.\n", num);
        }
    }

    return 0;
}