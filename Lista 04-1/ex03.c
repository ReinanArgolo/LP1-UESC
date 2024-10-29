#include <stdio.h>

int ordenarNumeros(int n1, int n2, int n3);

int main() {
    int n1, n2, n3, triplas;

    printf("digite a quantidade de triplas: ");
    scanf("%d", &triplas);

    for (int i = 0; i < triplas; i++) {
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        printf("Digite o terceiro número: ");
        scanf("%d", &n3);

        ordenarNumeros(n1, n2, n3);
    }
    
}

int ordenarNumeros(int n1, int n2, int n3) {
    printf("ANTES DE ALTERAR\n");
    printf("n1: %d, n2: %d, n3: %d \n - - - - - - - \n", n1, n2, n3);
    

    int aux;
    
        if (n2 > n3) {
            aux = n1;
            n1 = n2;
            n2 = aux;

            aux = n3;
            n3 = n2;
            n2 = aux;
        }

        if (n1 > n2) {
            aux = n2;
            n2 = n1;
            n1 = aux;
        }

        if (n2 > n3) {
            aux = n3;
            n3 = n2;
            n2 = aux;
        }

        if (n1 > n2) {
            aux = n2;
            n2 = n1;
            n1 = aux;
        }
        
    

    printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);
}