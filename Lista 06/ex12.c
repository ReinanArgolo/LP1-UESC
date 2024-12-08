#include <stdio.h>
#define MAX 100
#define ASCII 128

void contarCaracteres(char [], char);
void percorrerString(char [], char []);
void imprimirEstatistica(char caracteres[]);

int main(void) {
    char caracteres[ASCII] = {0};
    char string[MAX];

    fgets(string, MAX, stdin);

    percorrerString(string, caracteres);
    imprimirEstatistica(caracteres);
}

void percorrerString(char string[], char caracteres[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        contarCaracteres(caracteres, string[i]);
    }
}

void contarCaracteres(char caracteres[], char caracter) {
    caracteres[caracter]++;
}

void imprimirEstatistica(char caracteres[]){
    for (int i = 0; i < ASCII; i++) {
        if(caracteres[i]) printf("%c = %d\n", i, caracteres[i]);
    }
}