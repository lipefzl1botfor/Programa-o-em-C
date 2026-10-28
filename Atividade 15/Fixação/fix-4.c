#include <stdio.h>

int main()
{
    int matriz[3][3];
    int maior; 

    printf("Por favor, digite os valores para a matriz 3x3:\n");
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n--- Sua Matriz ---\n");

    maior= matriz [0][0];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
            if(matriz [i][j] > maior){
                maior = matriz [i][j];
            }
        }
        printf("\n");
    }

    printf("\nO maior valor na matriz é: %d\n", maior);

    return 0;
}

