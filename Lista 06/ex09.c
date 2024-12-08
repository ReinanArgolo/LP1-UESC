// Escreva um programa que receba uma string e informe:

// a. número de palavras,
// b. número de caracteres,
// c. número de caracteres em maiúscula,
// d. número de caracteres em minúscula,
// e. quantidade de caracteres numéricos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int contarPalavras(char []);
int* contarCaracteres(char []); 

int main(void) {
    char frase[MAX];

    fgets(frase, MAX, stdin);

    int* valores = contarCaracteres(frase);

    printf("A frase possui %d palavras\n", contarPalavras(frase));
    printf("A frase possui %d Caracteres\nA frase possui %d caracteres maiusculos\nA frase possui %d caracteres Minusculos\nAfrase possui %d caracteres numericos\n", valores[0], valores[1], valores[2], valores[3]);

    
}

int* contarCaracteres(char frase[]) {
    int* resultados = (int*)malloc(4 * sizeof(int));
    if (resultados == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    int i = 0;
    for(;frase[i] != '\n'; i++) {
        if(frase[i] >= 'A' && frase[i] <= 'Z') resultados[1]++;
        if(frase[i] >= 'a' && frase[i] <= 'z') resultados[2]++;
        if(frase[i] >= '0' && frase[i] <= '9') resultados[3]++;

    }

    resultados[0] = i;

    return resultados;

}

int contarPalavras(char word[]) {
    int contador = 0;
    for(int i = 0; i < word[i] != '\0'; i++) {
        if(word[i] == ' ' && ((word[i-1] > 32 && word[i-1] < 126))) contador++;
    }

    return contador+1;
}