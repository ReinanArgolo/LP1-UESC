#include <stdlib.h>
#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, n3 = 0, ntermos;

    printf("Digite um numero: ");
    scanf("%d", &ntermos);

    printf("Fibonacci de %d termos: ", ntermos);
    printf("%d, %d, ", n1, n2);

    for(int i = 0; i <= ntermos; i++) {
        
        n3 = n1 + n2;
        printf("%d, ", n3);
        n1 = n2;
        n2 = n3;
    }
}