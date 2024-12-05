#include <stdio.h>
#include <string.h>
#define MAX 50

void quebrarLinhas(char []);

int main(void) {

    char string[MAX];
    fgets(string, MAX, stdin);

    quebrarLinhas(string);

}

void quebrarLinhas(char word[]) {
    for(int i = 0; word[i] != '\0'; i++) {
        printf("%c", word[i]);
        if(word[i] == ' ') printf("\n");
    }
}
