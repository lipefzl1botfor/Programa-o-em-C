#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        char c = palavra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("A palavra possui %d vogal(is) minúscula(s).\n", contador);

    return 0;
}