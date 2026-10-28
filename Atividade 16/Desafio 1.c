#include <stdio.h>
 
int main()
{
    char palavra[50];
    int i, quantidade = 0;
 
    printf("Digite uma palavra: ");
    scanf("%49s", palavra);
 
    for (i = 0; palavra[i] != '\0'; i++) {
        quantidade++;
    }
 
    printf("A palavra \"%s\" possui %d letras.\n", palavra, quantidade);
 
    return 0;
}
