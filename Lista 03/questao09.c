#include <stdlib.h>
#include <stdio.h>

int main() {
    int lado = 0;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

   
    // for (int i = 0; i < lado; i++) {
    //     for (int j = 0; j < lado; j++) {
    //         if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
    //             printf("*");
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }


    for(int i = 0; i < lado; i++) {
        printf("*");
    }
    printf("\n");

    for(int i = 0; i < lado-2; i++) {
        printf("*");
        for(int j = 0; j < lado-2; j++) {
           printf(" ");
        }
        printf("*\n");
    }

     for(int i = 0; i < lado; i++) {
        printf("*");
    }
}