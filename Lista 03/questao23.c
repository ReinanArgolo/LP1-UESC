#include <stdlib.h>
#include <stdio.h>

int main() {

    int prod = 1;
    
    for(int i = 1; i <= 15; i+=2) {
        
        prod *= i;
        
    }

    printf("O produto dos valores ímpares de 1 a 15 é: %d", prod);
}