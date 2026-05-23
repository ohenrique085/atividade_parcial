#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    int i;

    *maior = array[0];
    *menor = array[0];

    for(i = 1; i < tamanho; i++) {
        if(array[i] > *maior) {
            *maior = array[i];
        }

        if(array[i] < *menor) {
            *menor = array[i];
        }
    }
}

int main() {
    int numeros[5];
    int maior, menor;
    int i;

    printf("Digite 5 numeros:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    encontrarMaiorMenor(numeros, 5, &maior, &menor);

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
