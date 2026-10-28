#include <stdio.h>

int main()
{
    float nota[3][2];
    float media[3]; 

    printf("Por favor digite as notas de cada aluno:\n");

    for(int i = 0; i < 3; i++){
        float soma_notas = 0; 
        
        for(int j = 0; j < 2; j++){
            printf("Por favor digite valor para posicao [%d] [%d]: ", i, j);
            scanf("%f", &nota[i][j]);
            
            soma_notas = soma_notas + nota[i][j]; 
        }
        
       
        media[i] = soma_notas / 2.0; 
    }

    printf("\n--- Seus Valores e Medias ---\n");

    for(int i = 0; i < 3; i++){
        printf("Aluno %d:\t", i + 1);
        
        for(int j = 0; j < 2; j++){
            printf("%.1f\t", nota[i][j]); 
        }
        
        printf("-> Media: %.1f\n", media[i]); 
    }

    return 0;
}
