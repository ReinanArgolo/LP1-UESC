#include <stdio.h>

void solicicitarFatorial(int n);
void imprimirFatorial(int n);

int main() {
    int n;

    printf("Digite um n para calcular os fatoriais até ele: ");
    scanf("%d", &n);
    solicicitarFatorial(n);

}

void solicicitarFatorial(int n) {
    for(int i = 1; i <=n; i++) {
        printf("Fatorial de %d: ", i);
        imprimirFatorial(i);
    }
}

void imprimirFatorial(int n) {
    for(int j = 1; j<n; j++) {
        printf("%d", j);
        if (j < n - 1) {
            printf(" + ");
        }
    }

    printf("\n");

}