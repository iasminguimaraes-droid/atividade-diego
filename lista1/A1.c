#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

void main() {
    struct Pessoa pessoa;

    printf("Digite o nome da pessoa:");
    scanf("%s", &pessoa.nome);

    printf("Digite a idade da pessoa:");
    scanf("%i", &pessoa.idade);

    printf("Digite a sua altura:");
    scanf("%f", &pessoa.altura);

    printf("A pessoa registrada e:\nNome: %s\nIdade: %i\nAltura: %f", pessoa.nome, pessoa.idade, pessoa.altura);
}
