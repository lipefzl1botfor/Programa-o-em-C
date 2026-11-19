#include <stdio.h>
typedef struct{
char nome[50];
float salario;
int hExtras;
}funcionario;
int main() {
int funcionarios = 0;
funcionario f;
FILE *arquivo;
int i;
 printf("\nDigite o numero de funcionarios:");
 scanf("%d", &funcionarios);

 if(funcionarios < 1 || funcionarios > 5){
  printf("\nQuantidade nao aceita!");
  return 1;
 }

 arquivo = fopen("funcionarios.txt","a+");

 if(arquivo == NULL){
  printf("\nErro ao abrir o arquivo!");
  return 1;
 }

 for(i = 0; i < funcionarios; i++){
 
 printf("\nDigite o nome do funcionario:");
 scanf(" %49[^\n]s", f.nome);
 printf("\nDigite o salario do funcionario:");
 scanf("%f", &f.salario);
 printf("\nDigite o numero de horas extras do funcionario:");
 scanf("%d", &f.hExtras);

 fprintf(arquivo, "Nome: %s\nSalario: %.2f\nHoras Extras: %d\n\n", f.nome, f.salario, f.hExtras);
 }
    fclose(arquivo);
    printf("\nInformacoes salvas com sucesso!");
    return 0;
}
