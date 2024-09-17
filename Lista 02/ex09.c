#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

int num;
printf("Digite um número inteiro de 5 dígitos: ");
scanf("%d", &num);

if (num < 10000 || num > 99999) {
    printf("Número inválido. Por favor, insira um número de 5 dígitos.\n");
} else {

    int d1 = num / 10000;
    int d2 = (num / 1000) % 10;
    int d3 = (num / 100) % 10;
    int d4 = (num / 10) % 10;
    int d5 = num % 10; 

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
}


    return 0;
}
