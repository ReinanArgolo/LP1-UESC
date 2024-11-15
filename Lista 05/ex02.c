#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int sortearNum();

int main(void) {
    int vetor[N];

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        vetor[i] = sortearNum();
    }

    for (int i = 0; i < 10; i++) {
        printf("%d \n", vetor[i]);
    }
    
}

int sortearNum() {
    while (1) {
        int n = rand();

        if (n % 2 != 0) {
            return n;
        }
    }
    
}
