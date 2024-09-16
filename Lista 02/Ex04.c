#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int raio;
    float circunferencia, area, diametro;
    const int pi = 3.14;

    printf("Digite o raio: ");
    scanf("%d", &raio);

    diametro = raio * 2;
    circunferencia = 2 * pi * raio;
    area = pi * (raio * raio);  

    printf("Diametro: %.2f\n", diametro);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("Area: %.2f\n", area);  
        
    return 0;
}
