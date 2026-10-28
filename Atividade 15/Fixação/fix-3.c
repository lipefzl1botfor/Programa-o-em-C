#include <stdio.h>

int main()
{
    int matriz[3][3];
    int contador_pares = 0; 

    printf("Por favor, digite os valores para a matriz 3x3:\n");
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] % 2 == 0) {
                contador_pares++; 
            }
        }
    }

    printf("\n--- Sua Matriz ---\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA quantidade de valores pares na matriz e: %d\n", contador_pares);

    return 0;
}
