#include <stdlib.h>
#include <stdio.h>

int main() {
     int n, max = 0, min = 0, seqLen;

    printf("Digite um número: ");
    scanf("%d", &n);

    seqLen = n;
    max = n;
    min = n;


    for(int i = 0; i <= seqLen - 2; i++) {
        printf("Digite outro número: ");
        scanf("%d", &n);

        if(n < min) {
            min = n;
        }

        if (n > max)
        {
            max = n;
        }
        
    }

    printf("O maior valor é: %d\n", max);
    printf("O menor valor é: %d", min);
    
}