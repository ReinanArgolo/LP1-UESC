#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    float d = pow(b, 2) - 4 * a * c;

    if(d < 0) {
        printf("Não existem raízes reais\n");
    } else if(d == 0) {
        float x = -b / (2 * a);
        printf("Existe uma raiz real: %.2f\n", x);
    } else {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("Existem duas raízes reais: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
