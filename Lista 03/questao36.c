#include <stdio.h>
#include <math.h>

int main() {
    double x, S;
    int n;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Prof pra calcular o Log eu uei a função log(x) da biblioteca math.h
    S = log(x) + x;
    for (int i = 2; i <= n; i++) {
        S += pow(x, i) / i;
    }

    printf("O valor da serie S é: %lf\n", S);

    return 0;
}