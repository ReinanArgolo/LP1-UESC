#include <stdlib.h>
#include <stdio.h>

int main() {
    int cont = 0, num, max1, max2 ;

    printf("Digite um número: ");
    scanf("%d", &num);

    max1 = num;
    
    while (cont < 9) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if(cont == 0) {
            max2 = num;
        }

        if (num > max1) {
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }

        cont++;
    }

    printf("Os maiores números são: \n %d\n %d", max1, max2);
}