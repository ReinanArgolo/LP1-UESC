#include <stdio.h>
#include <math.h>

float calcularDistancia(int x0, int x1, int y0, int y1);

int main(void) {
    int n, x0, x1, y0, y1;

    printf("digite a quantidade de duplas de numeros: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("digite x0: ");
        scanf("%d", &x0);
        printf("digite x1: ");
        scanf("%d", &x1);
        printf("digite y0: ");
        scanf("%d", &y0);
        printf("digite y1: ");
        scanf("%d", &y1);


        float distanciaCalculada = calcularDistancia(x0, x1, y0, y1);

        printf("A distancia ate a origem e %.2f\n", distanciaCalculada);
    }
    
}

float calcularDistancia(int x0, int x1, int y0, int y1) {
    return sqrt(pow((x1-x0), 2) + pow((y1 - y0), 2));
}