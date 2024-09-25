#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    if (a < 0) {
        a = -a;
    }

    b = 2;
    c = 1;
   

    while (b < a) {
        b = b * 2;
        c = c + 1; 
    }

    if ( b = a ) {
        printf("Sim é");
    } else {
        printf("Não é!");
    }
    

    return 0;
}
