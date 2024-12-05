#include <stdio.h>
#define PALAVRAS 3
#define CARATERES 100

int main(void) {
    char ms[PALAVRAS][CARATERES];
    for(int i = 0; i < PALAVRAS; i++) { 
        gets(ms[i]);
    }

    int i;
    for (i = 0; ms[0][i] != '\0' && ms[1][i] != '\0' && ms[3][i] != '\0'; i++) {
        
    }

}