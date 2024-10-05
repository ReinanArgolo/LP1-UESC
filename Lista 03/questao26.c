#include <stdlib.h>
#include <stdio.h>

int main() {
    int i;
    float pi = 4, four = 4;

    printf("Termo da serie \t valor de Pi \n");

    for(i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            four = 4;
        } else {
            four = -4;
        }

        pi += four / (i * 2 + 1);

        printf("%d \t \t %f\n", i, pi);
    }
} 

// o programa n da valores exatos por conta da limitação de aramazenamento das variáveis. 