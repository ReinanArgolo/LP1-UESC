#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);


    if(x > 0) {
        if(y > 0) {
            printf("O ponto (%d, %d) pertence ao primeiro quadrante.\n", x, y);
        } else {
            printf("O ponto (%d, %d) pertence ao quarto quadrante.\n", x, y);
        }
    } else {
        if(y > 0) {
            printf("O ponto (%d, %d) pertence ao segundo quadrante.\n", x, y);
        } else {
            printf("O ponto (%d, %d) pertence ao terceiro quadrante.\n", x, y);
        }
    }
    return 0;
}
