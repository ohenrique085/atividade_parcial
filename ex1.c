#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nValores antes da troca:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    trocarValores(&num1, &num2);

    printf("\nValores depois da troca:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
