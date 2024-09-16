#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("O numero %d e par. \n", n);
    } else {
        printf("O numero %d e ímpar. \n", n);
    }

    return 0;
}
