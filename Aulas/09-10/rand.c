#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, seed;

    // printf("Entre com uma semente: ");
    // scanf("%d", &seed);
    srand(time(NULL));
    for(i=1; i<=20; i++) {
        printf("%8d", 1 + (rand() % 6));

        if(i % 5 == 0) {
            printf("\n");
        }
    }

    return 0;
}

