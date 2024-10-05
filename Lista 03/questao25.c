#include <stdlib.h>
#include <stdio.h>

int main() {
    int numConta, flag = 0;
    float limiteAnt, saldo, limiteDps;

    while (flag == 0)
    {
        printf("digite o numero da conta: ");
        scanf("%d", &numConta);

        printf("digite o limite do cliente antes da recessao: ");
        scanf("%f", &limiteAnt);

        printf("Digite o saldo do cliente: ");
        scanf("%f", &saldo);


        limiteDps = limiteAnt / 2;

        if(saldo > limiteDps) {
            printf("O saldo atual excede o limite após a recessao\n");
        }

        printf("Digite 0 para continuar, 1 para encerrar: ");
        scanf("%d", &flag);
    }
    

}