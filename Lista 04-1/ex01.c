#include <stdio.h>

float calcularDesconto(int qntdProd, float preco);

float calcularTotalProd(int qntddProd, float preco);

int main(void) {
    int quantidade;
    float preco, desconto, precoProdutos, valorFinal;
    printf("Digite o preço do produto: ");
    scanf("%f",&preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d",&quantidade);

    desconto = calcularDesconto(quantidade, preco);

    precoProdutos = calcularTotalProd(quantidade, preco);
    valorFinal =  precoProdutos - desconto;

    printf("O desconto foi de: %.2f\nValor total: %.2f\nValor com desconto %.2f", desconto, precoProdutos, valorFinal);

}

float calcularTotalProd(int qntddProd, float preco) {
    return qntddProd * preco;
}

float calcularDesconto(int qntdProd, float preco) {

    if(qntdProd > 6 && qntdProd < 12) {
        return (preco * qntdProd) * 0.04;  
    } else if (qntdProd > 12) {
        return (preco * qntdProd) * 0.1;  
    } else {
        return 0;
    }
}