#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[50];
    char categoria[20];
    char mensagem[60]= "Produto: ";
    char copia[60];
    
 printf("==== Registro de Produto ====\n");
 printf("Por favor informe o nome do produto:\n");
 scanf("%49s", nome);
 
 printf("Por favor informe seu nível: (HARDWARE) ou (PERIFERICO)\n");
 scanf("%19s", categoria);
  
  printf("==== Dados Cadastrados ====\n");
  
  printf("Nome: %s\n", nome);
  printf("Quantidade de caracteres: %zu\n", strlen(nome));
  if(strcmp(categoria, "HARDWARE") == 0){
      printf("Categoria: HARDWARE\n");
  } else{
      printf("Categoria: PERIFERICO\n");
  }
  strcpy(copia, nome);
  strcat(mensagem, nome);
  
  printf("%s\n", mensagem);
  printf("Cadastro realizado com sucesso.");
  
    return 0;
}