#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite tres inteiros diferentes de zero: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0) {
        printf("Os numeros devem ser diferentes de zero.\n");
        return 0;
    }

    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
        printf("Os numeros podem formar um triangulo retangulo.\n");
    
    } else {

        printf("Os numeros nao podem formar um triangulo retangulo.\n");

    }

    return 0;
}

