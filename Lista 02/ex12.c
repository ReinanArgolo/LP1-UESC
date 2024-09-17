#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int a, b, c;
    printf("Digite tres numeros inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%dx^2 + %dx + %d\n", a, b, c);

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Erro: O polinomio nao possui raizes reais!\n");
    } else {
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes do polinomio sao: %.2f e %.2f\n", raiz1, raiz2);
    }
   
}