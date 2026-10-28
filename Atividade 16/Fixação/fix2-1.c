#include <stdio.h>
 
int main()
{
   char nome[50];
   
   printf("Por favor digite seu nome \n");
   scanf("%49s", &nome);
   
   printf("Seu nome é \"%s\" bom dia! ", nome);
    return 0;
}
