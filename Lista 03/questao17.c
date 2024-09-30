#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, X = 0, fatorial = 0 ;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
       int sumFat = 1;
       int sumX = 1;
       for(int j = 1; j <= i; j++) {
        sumFat *= j;
       }

        fatorial += sumFat;

        X += pow(n, i);
    }
    printf("%d", 1+(X/fatorial));
}

