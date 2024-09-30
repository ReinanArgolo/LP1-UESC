#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i, j;
    float x, soma = 0, fatI;
    
    printf("Digite o valor de n: ");
    scanf(" %d", &n);
    
    printf("Digite o valor de x: ");
    scanf(" %f", &x);

    if (x < 0 || n < 0)
    {
        printf("por favor, digite um valor positivo para x e n\n");
        return 0;
    }
    
    for(i = 0; i <= n; i++) {
       fatI = 1;
       for(j = 1; j <= i; j++) {
        fatI *= j;
       }
       soma += pow(x, i)/fatI;
        
    }
    printf("O valor de e^x é: %.2f\n", soma);
}

