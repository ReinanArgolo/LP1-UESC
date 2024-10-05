#include <stdio.h>

int main(void) {
    int choice, opc1 = 0, opc2 = 0, opc3 = 0, opc4 = 0, opc5 = 0;
    int total = 0;

    while (choice != 0) {
        printf("Avalie a gestão do Governo de Itabuna com uma nota de 0 a 5 (0 = muito ruim, 5 = excelente) (0 to exit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                opc1++;
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                opc2++;
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                opc3++;
                printf("Você escolheu a opção 3\n");
                break;
            case 4:
                opc4++;
                printf("Você escolheu a opção 4\n");
                break;
            case 5:
                opc5++;
                printf("Você escolheu a opção 5\n");
                break;
            case 0:
                printf("Pesquisa finalizada...\n");
                choice = 0;
            default:
                printf("Escolha invalida...\n\n\n");
                break;
        }
    }

    total = opc1 + opc2 + opc3 + opc4 + opc5;

    printf("- - - - BOLETIM DE VOTOS - - - -\n");
    printf("Muito ruim: %d votos\n", opc1);
    printf("Pessima: %d votos\n", opc2);
    printf("Razoavel: %d votos\n", opc3);
    printf("Boa: %d votos\n", opc4);
    printf("Excelente: %d votos\n\n", opc5);
    printf("Total de votos: %d\n\n\n", total);

    printf("Porcentagem de votos de pessoas que avaliaram Boa ou Excelente: ");
    printf("%.2f%%\n", ((float)(opc4 + opc5) / total) * 100);

    return 0;
}