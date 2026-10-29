#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[50];
    char perfil[20];
    char mensagem[60]= "Bem Vindo(a),";
    char copia[60];
    
 printf("==== Registro de Usuário ====\n");
 printf("Por favor informe seu nome:\n");
 scanf("%49s", nome);
 
 printf("Por favor informe seu nível: (ADMIN) ou (COMUM)\n");
 scanf("%19s", perfil);
  
  printf("==== Dados Cadastrados ====\n");
  
  printf("Nome: %s\n", nome);
  printf("Quantidade de caracteres: %zu\n", strlen(nome));
  if(strcmp(perfil, "ADMIN") == 0){
      printf("Perfil: ADMIN\n");
  } else{
      printf("Perfil: COMUM\n");
  }
  strcpy(copia, nome);
  strcat(mensagem, nome);
  
  printf("%s!\n", mensagem);
  printf("Cadastro realizado com sucesso.");
  
    return 0;
}