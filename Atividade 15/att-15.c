/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int assentos [3] [4] = {
       {1,0,1,1},
       {0,0,1,0},
       {1,1,0,1}
   };
    int fileira, assento;
    
    printf("Escolha a fileira (de 1 a 3): ");
    scanf("%d", &fileira);
    
    printf("Escolha o assento (de 1 a 4)");
    scanf("%d", &assento);
    
    int i = fileira - 1;
    int j = assento - 1;
    
    if (i >= 0 && i < 3 && j >= 0 && j < 4){
      if (assentos[i][j] == 1) {
            printf("\nO assento escolhido (Fileira %d, Assento %d) esta LIVRE!\n", fileira, assento);
    } else {
            printf("\nDesculpe, o assento escolhido (Fileira %d, Assento %d) esta OCUPADO.\n", fileira, assento);
       }

    } else {
        printf("\nOpcao invalida! Escolha uma fileira de 1 a 3 e assento de 1 a 4.\n");
    }
    

  

    return 0;
}