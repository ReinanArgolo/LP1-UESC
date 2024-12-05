#include <stdio.h>
#include <stdlib.h>
#define MAX 50

char toUpper(char);
char toLower(char);

void percorrerString(char [], int);


int main(void) {
    char palavra[MAX];
    fgets(palavra, MAX, stdin);

    int x;

    printf("Digite 1 para Maiusculas e 0 para minusculas: ");
    scanf("%d", &x);

    percorrerString(palavra, x);

    printf("%s", palavra);

}
void percorrerString(char string[], int param) {
    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] >= 'a' && string[i] <= 'z' && param == 1) {
            string[i] = toUpper(string[i]);
        } 
        
        if(string[i] >= 'A' && string[i] <= 'Z' && param == 0) {
            string[i] = toLower(string[i]);
        }
    }
}



char toUpper(char letra) {
    return letra - ('a' - 'A');
}

char toLower(char letra) {
    return letra + ('a' - 'A');
}