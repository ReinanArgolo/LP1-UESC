#include <stdio.h>

int perfeito(int num);
void imprimirFator(int num);

int main(void) {

    for (int i = 1; i <= 100; i++) {
        if (perfeito(i)) {
            imprimirFator(i);
            printf("\n");
        }
    }
    
    return 0;
}

int perfeito(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (sum == num) ? 1 : 0;
}



void imprimirFator(int num) {
    printf("Os fatores de %d = ", num);
    for(int i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d", i);
            if (i != num / 2) {
                printf(" + ");
            }
        }
    }
}