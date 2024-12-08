#include <stdio.h>
#include <string.h>
#include <ctype.h>

void abreviarNome(char *, char *);

int main() {
    char nome[100];
    char abreviatura[50];

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    abreviarNome(nome, abreviatura);

    printf("Abreviatura: %s\n", abreviatura);

    return 0;
}

void abreviarNome(char *nome, char *abreviatura) {
    int i = 0, j = 0;
    char *token = strtok(nome, " ");
    while (token != NULL) {
        if (strcmp(token, "de") != 0 && strcmp(token, "do") != 0 && strcmp(token, "da") != 0 &&
            strcmp(token, "dos") != 0 && strcmp(token, "das") != 0) {
            abreviatura[j++] = toupper(token[0]);
            abreviatura[j++] = '.';
        }
        token = strtok(NULL, " ");
    }
    abreviatura[j - 1] = '\0'; 
}