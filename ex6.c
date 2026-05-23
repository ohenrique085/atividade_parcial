#include <stdio.h>
#include <ctype.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais = 0;
    *consoantes = 0;

    while(*str != '\0') {
        char letra = tolower(*str);

        if(letra >= 'a' && letra <= 'z') {
            if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }

        str++;
    }
}

int main() {
    char texto[100];
    int vogais, consoantes;

    printf("Digite uma frase: ");
    gets(texto);

    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}
