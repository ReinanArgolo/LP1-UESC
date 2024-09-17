#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, a;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    a = x;
    x = y;
    y = a;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    
}