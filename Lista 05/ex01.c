#include <stdio.h>

int calcularSoma(int, int, int[]);

int main() {
    int vetor[12];

    for (int i = 0; i < 12; i++) {
        int value;
        printf("Valor %d: ", i);
        scanf("%d", &value);    
        vetor[i] = value;
    }

    int x, y;
    printf("Digite dois valores de índice: ");
    scanf("%d %d", &x, &y);

    int soma = calcularSoma(x, y, vetor);
    printf("A soma dos elementos nos índices %d e %d é: %d\n", x, y, soma);

    return 0;
}

int calcularSoma(int n1, int n2, int vetor[]) {
    return vetor[n1] + vetor[n2];
}
