#include <stdio.h>

void trocarValores(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("\nAntes da troca: num1 = %d, num2 = %d\n", num1, num2);

    // Passa os endereços (&) para a função alterar as variáveis originais
    trocarValores(&num1, &num2);

    printf("Depois da troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
