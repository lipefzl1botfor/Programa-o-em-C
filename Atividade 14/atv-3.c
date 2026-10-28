#include <stdio.h>

int main()
{
    int valor [3] [3];
    int soma = 0;
    
    printf("Por favor digite 9 valores inteiros para somar:\n ");
    
  for(int i= 0; i<3; i++){
      for(int j= 0; j<3; j++){
          printf("Por favor digite valor para posição [%d] [%d]: ", i,j );
          scanf("%d", &valor[i][j]);
          
          soma= soma + valor[i][j];
      }
      printf("\n---Seus Valores---\n");
  }
  
  for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", valor[i][j]);
        }
        printf("\n");
    }
    
    printf("A soma de todos os valores equivale á: (%d)", soma);
    return 0;
}


