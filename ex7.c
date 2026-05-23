#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    char *inicio = str;
    // Aritmética de ponteiros: posiciona o ponteiro 'fim' exatamente no último caractere válido
    char *fim = str + strlen(str) - 1; 
    char temp;

    // Inversão in-place que ocorre até os ponteiros se cruzarem na memória
    while(inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma palavra: ");
    // Lê a string sem os problemas de segurança do gets
    scanf("%s", texto);

    inverterString(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}
