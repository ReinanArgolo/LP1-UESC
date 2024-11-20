#include <stdio.h>
#define SIZE 71

void lerFrase(char []);
void alterarFrase(int, char []);
int vefificarCaracter(int);
void imprimirFrase(char []);

int main() {
    char frase[SIZE] = {'W', 'a', 's', ' ', 'w', 'i', 'r', ' ', 'w', 'i', 's', 's', 'e', 'n', ',', ' ', 'i', 's', 't', ' ', 'e', 'i', 'n', ' ', 't', 'r', 'o', 'p', 'f', 'e', 'n', '.', '.', '.', ' ', 'W', 'a', 's', ' ', 'w', 'i', 'r', ' ', 'n', 'i', 'c', 'h', 't', ' ', 'w', 'i', 's', 's', 'e', 'n', ',', ' ', 'e', 'i', 'n', ' ', 'O', 'z', 'e', 'a', 'n'};
    lerFrase(frase);
    imprimirFrase(frase);
}

void lerFrase(char frase[]) {
    for (int i = 0; i < SIZE; i++) {
        if(vefificarCaracter((int)frase[i])) alterarFrase(i, frase);
    }
}

int vefificarCaracter(int caracter) {
    return (caracter == 32) ? 1:0;
}

void alterarFrase(int pos, char frase[]) {
    for(int i = pos; i < SIZE; i++) {
        frase[i] = frase[i+1];
    }
    
    frase[SIZE-1] = '\0';
}

void imprimirFrase(char frase[]) {
    for(int i = 0; i < SIZE; i++) {
        printf("%c", frase[i]);
    }

}