#include <stdio.h>

struct Produto {
    char nome[40];
    float preco;
    int quantidade;

};

void main() {
    struct Produto produto;
    printf("digite o nome do produto: ");
    scanf("%s", &produto.nome);

    printf("digite o preco: ");
    scanf("%f", &produto.preco);

    printf("digite a quantidade: ");
    scanf("%i", &produto.quantidade);

    printf("o produto registrado: \nNome: %s\nPreco: %f\nQuantidade: %i\n valor total: %f\n", produto.nome, produto.preco, produto.quantidade, produto.preco * produto.quantidade);

    int desconto = 10;
    float calculo = desconto / 100;
    float valor_do_desconto = produto.preco * calculo;

    printf("valor unitario com desconto: %f", produto.preco - valor_do_desconto);

}
