#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    for (fahrenheit = 50; fahrenheit <= 150; fahrenheit += 5) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%10.1f\t%7.1f\n", fahrenheit, celsius);
    }

    return 0;
}