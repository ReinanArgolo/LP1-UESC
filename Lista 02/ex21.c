#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double fahrenheit, celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %.2lf\n", fahrenheit);
} 