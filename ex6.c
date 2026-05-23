#include <stdio.h>
#include <ctype.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    // Inicializa os valores nos endereços de memória apontados
    *vogais = 0;
    *consoantes = 0;

    while (*str != '\0') {
        char letra = tolower(*str);

        if (letra >= 'a' && letra <= 'z') {
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                (*vogais)++; // Modifica o valor da variável lá no main por referência
            } else {
                (*consoantes)++; // Modifica o valor da variável lá no main por referência
            }
        }
        str++; // Aritmética de ponteiros: avança para o próximo caractere da string
    }
}

int main() {
    char texto[100];
    int vogais, consoantes;

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin); // Substitui o gets por segurança

    // Passa os endereços (&) para que a função possa alterar as variáveis locais do main
    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}
