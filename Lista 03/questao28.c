//  Uma  empresa  paga  a  seus  empregados  como  gerentes  (que  recebem  um  salário  fixo  mensal), 
// trabalhadores comuns (que recebem um salário fixo pelas primeiras 40 horas trabalhadas e 1.5 seu 
// salário  por  hora  normal  para  as  horas  extras  trabalhadas),  trabalhadores  por  comissão  (que 
// recebem  250  reais  mais  5.7%  de  suas  vendas  brutas)  ou  trabalhadores  por  empreitada  (que 
// recebem  uma  quantia  fixa  por  item  para  cada  dos  itens  produzidos  –  cada  trabalhador  por 
// empreitada da empresa trabalha com apenas um tipo de item). Escreva um programa que calcule o 
// pagamento semanal de cada empregado. Você não sabe de antemão o número empregados. Cada 
// tipo de empregado tem seu código próprio de pagamento: gerentes possuem código 1, 
// trabalhadores  comuns,  o  código  2,  trabalhadores  por  comissão,  o  código  3,  e  trabalhadores  por 
// empreitada, o código 4. Use o switch para calcular o pagamento de cada empregado com base em 
// seu código de pagamento. Dentro do switch peça ao usuário para entrar com os fatos adequados à 
// necessidade  de  seu  programa  para  calcular  o  pagamento  de  cada  empregado  com  base  em  seu 
// código. 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    int flag = 0, choice, horas, itensProd;
    float salario,vendas;
    char cargo[50];
    const float VALOR_ITEM = 8.20;

    while (flag == 0) {
        printf("Digite o tipo de empregado: \n 1 - gerente \n 2 - trabalhadores comuns \n 3 - trabalhadores por comissao \n 4 - trabalhos por empreitada\n 0 - ENCERRAR PROGRAMA \n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            salario = 5520.00;
            strcpy(cargo, "gerente");
            break;
        case 2:
            printf("Digite as horas trabalhadas do funcionário: ");
            scanf("%d", &horas);
            salario = 1420.00;
            if(horas > 40) {
                salario += (horas - 40) * 1.5;            
            }
            strcpy(cargo, "trabalhador comum");
            break;
        case 3:
            printf("digite o valor de vendas desse funcionario: ");
            scanf("%f", &vendas);
            salario = 200 + (vendas * 0.057);
            strcpy(cargo, "trabalhador por comissao");
            break;

        case 4:
            printf("Digite a quantidade itens produzidos pelo funcionario: ");
            scanf("%d", &itensProd);
            salario = itensProd * VALOR_ITEM;
            strcpy(cargo, "trabalhador por empreitada");
            break;

        case 0:
            return 1;
        default:
            printf("Digite uma opcao valida\n");
            continue;
            break;
        }


        printf(" ----- FOLHA DE PAGAMENTO -----\n");
        printf("CARGO: \t%s\nSALARIO: \tR$%f\n\n", cargo, salario);
        
    };
     
}