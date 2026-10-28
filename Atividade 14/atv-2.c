#include <stdio.h>

int main()
{
    int valor [2] [2];
    
    printf("Por favor digite 4 valores inteiros:\n ");
    
  for(int i= 0; i<2; i++){
      for(int j= 0; j<2; j++){
          printf("Por favor digite valor para posição [%d] [%d]: ", i,j );
          scanf("%d", &valor[i][j]);
      }
      printf("\n---Seus Valores---\n");
  }
  
  for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t", valor[i][j]);
        }
        printf("\n");
    }
    return 0;
}

