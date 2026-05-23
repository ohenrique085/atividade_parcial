#include <stdio.h>

void copiarString(char *origem, char *destino) {
    while(*origem != '\0') {
        *destino = *origem;

        origem++;
        destino++;
    }

    *destino = '\0';
}

int main() {
    char origem[100];
    char destino[100];

    printf("Digite uma string: ");
    gets(origem);

    copiarString(origem, destino);

    printf("String copiada: %s\n", destino);

    return 0;
}
