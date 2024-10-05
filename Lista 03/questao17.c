#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float x, pot = 1, soma = 1.0, fatI = 1;
    
    printf("Digite o valor de n: ");
    scanf(" %d", &n);
    
    printf("Digite o valor de x: ");
    scanf(" %f", &x);

    if (x < 0 || n < 0)
    {
        printf("por favor, digite um valor positivo para x e n\n");
        return 0;
    }

    for(i = 1; i <= n; i++) {
        fatI *= i;
        pot = pot * x;
        soma += pot/fatI;
        
    }
    printf("O valor de e^x é: %.2f\n", soma);
}