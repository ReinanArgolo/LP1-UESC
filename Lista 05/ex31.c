#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main(void) {
    char palavras[MAX][MAX+1] = { {'S', 'A', 'T', 'O', 'R'}, 
                                {'A', 'R', 'E', 'P', 'O'}, 
                                {'T', 'E', 'N', 'E', 'T'}, 
                                {'O', 'P', 'E', 'R','A'}};

    for(int i = 0; i < MAX; i++) { 
        for(int j = 0, k = MAX; j < MAX, k > 0; j++, k--) {
            if(palavras[i][j] != palavras[i][k]) {
                printf("Nao e palindromo!\n");
                continue;
            }
        }
    }


}