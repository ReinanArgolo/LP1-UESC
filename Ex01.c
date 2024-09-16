#include <stdio.h>
#include <stdlib.h>

int main(void) {

        int num1, num2, sum, sub, mlt, div;
        printf("Digite um número: ");
        scanf("%d", &num1);

        printf("Digite outro número: ");
        scanf("%d", &num2);

        sum = num1+num2;
        printf("A soma e: %d \n", sum);

        sub = num1 - num2;
        printf("A subtracao e: %d \n", sub);

        mlt = num1 *num2;
        printf("O resultado da multiplicacao e: %d \n", mlt);

        div = num1 / num2;
        printf("O resultado da divisão e: %d", div);


    return 0;
}
