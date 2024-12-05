#include <stdio.h>
#include <string.h>
#define MAX 50

void imprimirInvertido(char []);

int main(void) {

    char string[MAX];
    fgets(string, MAX, stdin);

    imprimirInvertido(string);

}

void imprimirInvertido(char word[]) {
    for(int i = strlen(word); i >= 0; i--) {
        printf("%c", word[i]);
    }
}
