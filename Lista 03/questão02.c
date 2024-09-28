#include <stdlib.h>
#include <stdio.h>

int main() {
    int numConta = 1;
    float saldoDevedor = 0, credito = 0, cobranca = 0, limite = 0;

    while(numConta != 0) {
        printf("Digite o número da conta (0 para finalizar): ");
        scanf("%d", &numConta);

        if (numConta == 0) {
            break;
        }

        printf("Digite o saldo devedor do cliente: ");
        scanf("%f", &saldoDevedor);
        printf("Digite o total de créditos aplicados ao cliente: ");
        scanf("%f", &credito);
        printf("Digite o total de cobranças aplicadas ao cliente: ");
        scanf("%f", &cobranca);
        printf("Digite o limite de crédito do cliente: ");
        scanf("%f", &limite);

        float novoSaldo = saldoDevedor - cobranca + credito;

        if (novoSaldo > limite) {
            printf("limite de crédito excedido\n");
        } 
    }

   


}