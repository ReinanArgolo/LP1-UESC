#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if(a<(b+c) && b<(a+c) && c<(a+b)) {
        if(a==b && b==c) {
            printf("Triangulo equilatero\n");
        } else if(a==b || b==c || a==c) {
            printf("Triangulo isosceles\n");
        } else {
            printf("Triangulo escaleno\n");
        }
    } else {
        printf("Nao e um triangulo\n");
    }
}