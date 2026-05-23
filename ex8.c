#include <stdio.h>

void calcular(float num1, float num2, float *soma, float *subtracao, float *multiplicacao, float *divisao) {
    *soma = num1 + num2;
    *subtracao = num1 - num2;
    *multiplicacao = num1 * num2;
    *divisao = num1 / num2;
}

int main() {
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    calcular(num1, num2, &soma, &subtracao, &multiplicacao, &divisao);

    printf("\nSoma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}
