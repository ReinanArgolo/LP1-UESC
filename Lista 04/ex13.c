#include <stdio.h>
#include <math.h>

int calcularDistancia(int x0, int x1, int y0, int y1);
float calcularDistanciaMedia(int soma, int vezes);

int main () {
    int n = 1, soma = 0, vezes = 0, x0, y0, x1, y1;

    while(n != 0) {
        printf("Digite o valor de x0: ");
        scanf("%d", &x0);

        printf("Digite o valor de y0: ");
        scanf("%d", &y0);

        printf("Digite o valor de x1: ");
        scanf("%d", &x1);

        printf("Digite o valor de y1: ");
        scanf("%d", &y1);

        int distancia = calcularDistancia(x0, x1, y0, y1);
        printf("A distancia entre os pontos (%d, %d) e (%d, %d) é: %d\n", x0, y0, x1, y1, distancia);
        soma += distancia;
        vezes++;

        printf("Deseja continuar? [0 - nao | 1 - sim]");
        scanf("%d", &n);
    }

    printf("A distancia media foi: %f", calcularDistanciaMedia(soma, vezes));
}

float calcularDistanciaMedia(int soma, int vezes) {
    if (vezes == 0) return 0;
    return (float)soma / vezes;
}

int calcularDistancia(int x0, int x1, int y0, int y1) {
    return sqrt(pow((x1-x0), 2) + pow((y1 - y0), 2));
}

