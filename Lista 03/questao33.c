#include <stdio.h>

int main() {
    int numero1, numero2, opcao;
    float resultado;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    printf("Escolha uma operação:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Divisão\n");
    printf("4. Multiplicação\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = numero1 + numero2;
            printf("Resultado: %f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("Resultado: %f\n", resultado);
            break;
        case 3:
            if (numero2 != 0) {
                resultado = (float)numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        case 4:
            resultado = numero1 * numero2;
            printf("Resultado: %f\n", resultado);
            break;
        default:
            printf("Erro: Opção inválida.\n");
            break;
    }

    return 0;
}