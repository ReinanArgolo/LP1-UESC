#include <stdio.h>
#define MAX 50

void removerOcorrencia(char [], int pos);

int main(void) {
    char string[MAX], c;

    printf("Digite uma frase.\n");
    fgets(string, MAX, stdin);

    printf("Digite o caracter a ser removido: \n");
    scanf("%c", &c);
    
    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == c) removerOcorrencia(string, i);
    }

    printf("%s", string);

}

void removerOcorrencia(char string[], int pos) {
    for(int i = pos; string[i - 1] != '\0'; i++) {
        string[i] = string[i+1];
    }
}
