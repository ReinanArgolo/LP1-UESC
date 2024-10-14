#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleat(int int1, int int2, int termos);

int main(void) {

    srand(time(NULL));

    aleat(1, 5, 3);
    printf("\n");
    aleat(1, 6, 1);
    printf("\n");
    aleat(3, 10, 10);
    printf("\n");
    aleat(0, 50000, 100);

    return 0;
}

void aleat(int int1, int int2, int termos) {
    srand(time(NULL));
    int i;
    for(i=1; i<=termos; i++) {
        printf("%d ", int1 + (rand() % (int2 - int1 + 1)));
    }
    printf("\n");
}