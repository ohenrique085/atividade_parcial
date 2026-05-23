#include <stdio.h>

void dobrar(int *numero) {
   //altera o valor na memoria usando o operador
    *numero = (*numero) * 2;
}

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Valor dobrado: %d\n", valor);

    return 0;
}
