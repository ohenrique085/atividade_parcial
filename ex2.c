#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    *maior = *array;
    *menor = *array;

    for (int i = 1; i < tamanho; i++) {
        // *(array + i) acessa a posição do vetor usando aritmética de ponteiros
        if (*(array + i) > *maior) {
            *maior = *(array + i);
        }
        if (*(array + i) < *menor) {
            *menor = *(array + i);
        }
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maiorElemento, menorElemento;

    // Passa o array e os endereços das variáveis que vão guardar o resultado
    encontrarMaiorMenor(vetor, tamanho, &maiorElemento, &menorElemento);

    printf("\nMaior: %d\n", maiorElemento);
    printf("Menor: %d\n", menorElemento);

    return 0;
}
