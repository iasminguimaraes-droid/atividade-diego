#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Soma = %.2f\n", somar(num1, num2));
    printf("Subtracao = %.2f\n", subtrair(num1, num2));
    printf("Multiplicacao = %.2f\n", multiplicar(num1, num2));

    if (num2 != 0) {
        printf("Divisao = %.2f\n", dividir(num1, num2));
    } else {
        dividir(num1, num2);
    }

}
