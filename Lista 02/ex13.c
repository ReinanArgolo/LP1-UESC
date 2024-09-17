#include <stdio.h>
#include <stdlib.h>

int main(void){
    int valor, n50, n20, n10, n1;

    printf("Digite o valor da conta: ");\
    scanf("%d", &valor);

    n50 = valor / 50;
    valor = valor % 50;
    n20 = valor / 20;
    valor = valor % 20;
    n10 = valor / 10;
    valor = valor % 10;
    n1 = valor;

    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 1: %d\n", n1);

}