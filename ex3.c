#include <stdio.h>

int main() {
    int numero = 10;
    int *ponteiro;

    ponteiro = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", &numero);
    printf("Valor do ponteiro: %p\n", ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
