#include <stdlib.h>
#include <stdio.h>

int main() {
    int n = 0, result = result = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial de %d: ", n);

    for(int i = 1; i <= n; i++) {
        result *= i;
        if(i < n) {
            printf("%d * ", i);
        } else {
            printf("%d = ", i);
        }
    }

    if (n <=13)
    {
        printf("O valor do fatorial é maior do que o INT é capaz de armazenar.\n");
    } else {
        printf("\n%d! = %d\n", n, result);
    }
    
}