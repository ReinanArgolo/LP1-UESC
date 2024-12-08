#include <stdio.h>
#include <string.h>
#define MAX 10
#define LETRAS 26

int verificarAnagrama(char [], char [], char [], char []);
void contarLetra(char, char []);

int main(void) {
    
    char str1[MAX] = {'R', 'O', 'M', 'V', '\0'};
    char str2[MAX] = {'A', 'M', 'O', 'R', '\0'};
    char letras1[LETRAS] = {};
    char letras2[LETRAS] = {};

    if(verificarAnagrama(str1, str2, letras1, letras2)) {
        printf("As palavras sao anagramas!\n");
    } else {
        printf("Nao sao anagramas.\n");
    }

    
}

int verificarAnagrama(char str1[], char str2[], char letras1[], char letras2 []) {

    if(strlen(str1) != strlen(str2)) return 0;

    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] -= 32;
        }

        if(str2[i] >= 'a' && str2[i] <= 'z') {
            str2[i] -= 32;
        }

        letras1[str1[i] - 'A']++;
        letras2[str2[i] - 'A']++;
    }

    for(int i = 0; i < LETRAS; i++) {
        if(letras1[i] != letras2[i]) return 0;
    }

    return 1;

}