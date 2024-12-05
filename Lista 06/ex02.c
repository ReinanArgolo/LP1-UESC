#include <stdio.h>
#define MAX 10

int main(void) {
    char string[MAX];

    printf("Digite uma frase: ");
    gets(string);

    for(int i = 0; string[i] != '\0'; i++) {
        printf("%c\n", string[i]);
    }

}