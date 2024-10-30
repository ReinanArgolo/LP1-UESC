#include <stdio.h>
#include <stdlib.h>

// PROTOTIPOS
int calcularFibonacci(int n1, int n2, int num);
int verificarMaior(int n2, int num);
int verificarProx(int n1, int n2, int num);

// MAIN

int main(void) {
    int num;
    printf("Digite o numero para verificar o mais proximo: ");
    scanf("%d", &num);

    int numProx = calcularFibonacci(1, 1, num);
    printf("O numero da sequencia de Fibonacci mais proximo e %d", numProx);
}

// FUNCOES 
int calcularFibonacci (int n1, int n2, int num) {
    int fib = n1 + n2;

    if(verificarMaior(n2, num)) {
        return verificarProx(n1, n2, num);
    }

    calcularFibonacci(n2, fib, num);
}

int verificarMaior(int n2, int num) {
    return (n2 > num) ? 1 : 0;
}

int verificarProx(int n1, int n2, int num) {
    int rN1 = abs(n1 - num);
    int rN2 = abs(n2 - num) ;

    if (rN1 > rN2) {
        return n2;
    } else {
        return n1;
    }
    
}



