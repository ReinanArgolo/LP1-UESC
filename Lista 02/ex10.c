#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int quad, cubo;

    printf("N\tQuadrado\tCubo\n");
    for (int i = 0; i <= 10; i++) {
        
        quad = i * i;
        cubo = i * i * i;

        printf("%d\t%d\t%d\n", i, quad, cubo);
    }
    return 0;
}
