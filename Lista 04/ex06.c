#include <stdio.h>

int verificarPrimo(int num);
int verificarIntervalo(int n1, int n2);

int main() {
    
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(verificarPrimo(n)) {
        printf("O numero %d e primo", n);
    } else {
        printf("O valor %d nao e primo", n);
    }

    verificarIntervalo(1, 1000);

}

int verificarPrimo(int num) {
    int cont = 0;
    for(int i = 1; i <= (num/2)+1; i++) {
        if(num % i == 0) {
            cont++;
        }
    }

    if(cont < 2 || num == 2) {
        return 1;
    } else {
        return 0;
    }
}

int verificarIntervalo(int n1, int n2) {
    for(int i = n1; i <= n2; i++) {
        if (verificarPrimo(i)) {
            printf("%d\n", i);
        }
    }
}