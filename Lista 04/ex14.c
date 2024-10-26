#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarMaior(int maior, int num);
int verificarMenor(int menor, int num);
int verificarPar(int n1);
int calcularProdutorio(int prod, int num);
int calcularSoma(int soma, int num);

int main() {
    int n, numero, maior, menor, produtorioPares = 1, somatorioImpares = 0;
    srand(time(NULL));

    printf("Digite a quantidade de numeros aleatorios: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        numero = rand() % 100 + 1;
        printf("%d ", numero);
        if (i == 0) {
            maior = numero;
            menor = numero;
        }

        maior = verificarMaior(maior, numero);
        menor = verificarMenor(menor, numero);

        if (verificarPar(numero)) {
            produtorioPares = calcularProdutorio(produtorioPares, numero);
        } else {
            somatorioImpares = calcularSoma(somatorioImpares, numero);
        }
        

    }
        

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Produtos dos numeros pares: %d\n", produtorioPares);
    printf("Soma dos numeros impares: %d\n", somatorioImpares);

    return 0;
}

int verificarMaior(int maior, int num) {
    if(num > maior) {
        return num;
    } else {
        return maior;
    }
}
int verificarMenor(int menor, int num) {
    if(num < menor) {
        return num;
    } else {
        return menor;
    }
}

int verificarPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

int calcularProdutorio(int prod, int num) {
    return prod * num;
}

int calcularSoma(int soma, int num) {
    return soma += num;
}