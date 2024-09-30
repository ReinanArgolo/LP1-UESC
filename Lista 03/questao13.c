#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, resto, cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n > 0) {
        resto = n % 10;
        printf("%d\n", resto);
        if(resto == 7) {
            cont++;
        }
        n = n / 10;
    }
    
    printf("\nO numero 7 aparece %d vezes.\n", cont);
}