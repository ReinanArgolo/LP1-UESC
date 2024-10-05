#include <stdlib.h>
#include <stdio.h>

int main() {

    int dia = 1, codigo = 0, qntProd = 0, totalProdutos = 0, maxDia = 0, diaMax = 0,  maxLucroCod = 0;
    float totalVendas = 0.0, totalLucro = 0.0, totalCusto = 0.0, vendaDia = 0.0, lucroDia = 0.0, custoDia = 0.0, maxLucro = 0.0;

    while (dia <= 7) {
        printf("PRODUTO\t\tPREÇO AO CUSTO\t\tPREÇO DE VAREJO\n");
        printf("1\t\t R$ 1.55 \t\t R$ 2.98\n");
        printf("2\t\t R$ 2.27 \t\t R$ 4.50\n");
        printf("3\t\t R$ 5.47 \t\t R$ 9.99\n");
        printf("4\t\t R$ 3.80 \t\t R$ 4.49\n");
        printf("5\t\t R$ 3.15 \t\t R$ 6.87\n\n");


        printf("Dia %d\n", dia);
        printf("Digite o código do produto: ");
        scanf("%d", &codigo);
        printf("Produto %d selecionado. Digite a quantidade: ", codigo);
        scanf("%d", &qntProd);

        totalProdutos += qntProd;

        switch (codigo) {
        case 1:
            printf("Produto 1\n");
            vendaDia = 2.98 * qntProd;
            lucroDia = (2.98 - 1.55) * qntProd;
            custoDia = 1.55 * qntProd;
            totalProdutos++;
            break;
        case 2:
            printf("Produto 2\n");
            vendaDia = 4.50 * qntProd;
            lucroDia = (4.50 - 2.27) * qntProd;
            custoDia = 2.27 * qntProd;
            totalProdutos++;

            break;
        case 3: 
            printf("Produto 3\n");
            vendaDia = 9.99 * qntProd;
            lucroDia = (9.99 - 5.47) * qntProd;
            custoDia = 5.47 * qntProd;
            totalProdutos++;

            break;
        case 4: 
            printf("Produto 4\n");
            vendaDia = 4.49 * qntProd;
            lucroDia = (4.49 - 3.80) * qntProd;
            custoDia = 3.80 * qntProd;
            totalProdutos++;

            break;
        case 5: 
            printf("Produto 5\n");
            vendaDia = 6.87 * qntProd;
            lucroDia = (6.87 - 3.15) * qntProd;
            custoDia = 3.15 * qntProd;
            totalProdutos++;
            break;
        default:
            printf("Código inválido\n");
            break;
        }

        if(maxDia < qntProd) {
            maxDia = qntProd;
            diaMax = dia;
        }

        if(maxLucro < lucroDia) {
            maxLucro = lucroDia;
            maxLucroCod = codigo;
        }

        dia++;

        totalVendas += vendaDia;
        totalLucro += lucroDia;
        totalCusto += custoDia;


    }


    printf("- - - - - Relatório Semanal - - - - - \n");
    printf("Total de vendas da semana: R$%.2f\n", totalVendas);
    printf("Total de produtos vendidos: %d\n", totalProdutos);
    printf("O Lucro total da semana foi de R$%.2f\n", totalLucro);
    printf("O dia de maior venda foi o dia %d com %d produtos vendidos\n", diaMax, maxDia);
    printf("O produto campeao foi o %d com R$%.2f de LUCRO\n", maxLucroCod, maxLucro);


    
}