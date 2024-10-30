#include <stdio.h>
#include <math.h>

float calcularDistancia(float x0, float x1, float y0, float y1);
float calcularDistanciaMedia(float soma, int vezes);

int main () {
    int n = 1, vezes = 0, x0, y0, x1, y1;
    float soma = 0;

    while(n != 0) {
        printf("Digite o valor de x0: ");
        scanf("%f", &x0);

        printf("Digite o valor de y0: ");
        scanf("%f", &y0);

        printf("Digite o valor de x1: ");
        scanf("%f", &x1);

        printf("Digite o valor de y1: ");
        scanf("%f", &y1);

        float distancia = calcularDistancia(x0, x1, y0, y1);
        printf("A distancia entre os pontos (%d, %d) e (%d, %d) é: %d\n", x0, y0, x1, y1, distancia);
        soma += distancia;
        vezes++;

        printf("Deseja continuar? [0 - nao | 1 - sim]");
        scanf("%d", &n);
    }

    printf("A distancia media foi: %f", calcularDistanciaMedia(soma, vezes));
}

float calcularDistanciaMedia(float soma, int vezes) {
    if (vezes == 0) return 0;
    return (float)soma / vezes;
}

float calcularDistancia(float x0, float x1, float y0, float y1) {
    return sqrt(pow((x1-x0), 2) + pow((y1 - y0), 2));
}

