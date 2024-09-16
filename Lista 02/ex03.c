#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float n1, n2, n3, sum, med, prod, max, min;

    printf("Digite o n1: ");
    scanf("%f", &n1);

    printf("Digite o n2: ");
    scanf("%f", &n2);

    printf("Digite o n3: ");
    scanf("%f", &n3);

    sum = n1 + n2 + n3;

    med = sum / 3;

    prod = n1 * n2 * n3;

    if((n1 < n2) && (n1 < n3) ) {
        min = n1;
    } else if((n2 < n1) && (n2 < n3)) {
        min = n2;
    } else {
        min = n3;
    }

    if((n1 > n2) && (n1 > n3) ) {
        max = n1;
    } else if((n2 > n1) && (n2 > n3)) {
        max = n2;
    } else {
        max = n3;
    }

    printf("Soma: %.2f\n", sum);
    printf("Média: %.2f\n", med);
    printf("Produto: %.2f\n", prod);
    printf("Maior: %.2f\n", max);
    printf("Menor: %.2f\n", min);
    

}
