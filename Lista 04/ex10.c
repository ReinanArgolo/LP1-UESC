#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int jogarDado();
int lancarDados();

int main() {
    srand(time(NULL));
    int soma = 0, ponto = 0;

    soma = lancarDados();
    
    if((soma == 7 || soma == 11)) {
        printf("Você ganhou fez %d pontos\n", soma);

    } else if ((soma == 2 || soma == 3 || soma == 12)){
        printf("A casa ganhou voce fez %d pontos\n", soma);

    } else {
        ponto = soma;
        printf("PONTO! Ele e: %d\n", ponto);

        soma = lancarDados();
        printf("Soma: %d\n", soma);

        while(soma != ponto && soma != 7) {
            soma = lancarDados();
            printf("Soma: %d\n", soma);
        }

        if(soma == ponto) {
            printf("Voce fez o ponto! GANHOU!\n");
        } else {
            printf("A Casa ganhou. Voce tirou 7\n");
        }
    }

   
}

int lancarDados() {
    int lancamento1 = jogarDado();
    int lancamento2 = jogarDado();

    printf("Dado 01: %d\nDado 02: %d\n", lancamento1, lancamento2);

    return lancamento1 + lancamento2;
}

int jogarDado() {
    return 1 + (rand() % 6);
}