#include <stdio.h>

int main() {
int numeros[5];
FILE *arquivo;
int i;
    for(i=0;i < 5; i++){
    printf("\nDigite um número:");
    scanf("%d", &numeros[i]);
    }
    arquivo = fopen("numeros.txt","a");
    for(i=0; i<5;i++){
      fprintf(arquivo,"\nNumero %d", numeros[i]);
    }
    fclose(arquivo);
    printf("\nInformações salvas com sucesso!");
    return 0;
}
