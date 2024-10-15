#include <stdio.h>

int multiplo(int a, int b) {
    return (b % a == 0) ? 1 : 0;
}

int main() {
    int n, a, b;
    
    printf("Quantas duplas de números você deseja verificar? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Digite o primeiro número inteiro (a): ");
    	scanf("%d", &a);

        printf("Digite o segundo número inteiro (b): ");
        scanf("%d", &b); 
        
        if (multiplo(a, b)) {
            printf("%d é múltiplo de %d\n", b, a);
        } else {
            printf("%d não é múltiplo de %d\n", b, a);
        }
    }
    
    return 0;
}