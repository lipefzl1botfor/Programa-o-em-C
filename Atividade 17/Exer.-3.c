#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[50];
    char categoria[20];
    char mensagem[60]= "Ola, ";
    char copia[60];
    
 printf("==== Identificacao Academia ====\n");
 printf("Nome do estudante: \n");
 scanf("%49s", nome);
 
 printf("Codigo do curso: (CC) ou (SI)\n");
 scanf("%19s", categoria);
  
  printf("==== Dados Cadastrados ====\n");
  
  printf("Nome: %s\n", nome);
  if(strcmp(categoria, "CC") == 0){
      printf("Curso: Ciencia da Computação\n");
  } else{
      printf("Curso: Sistemas de Informação\n");
  }
  printf("Quantidade de caracteres: %zu\n", strlen(nome));
  strcpy(copia, nome);
  strcat(mensagem, nome);
  
  printf("%s!\n", mensagem);
  printf("Cadastro realizado com sucesso.");
  
    return 0;
}