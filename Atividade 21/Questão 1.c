// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
typedef struct{
    char nome[50];
    int matricula;
}funcionario;
int main() {
FILE *arquivo;
    funcionario f;
    int funcionarios = 0;
    printf("Quantidade de funcionários (1 a 5):");
    scanf("%d", &funcionarios);

    if(funcionarios < 1 || funcionarios > 5){
        printf("Quantidade inválida!");
        return 1;
    }

    arquivo = fopen("funcionarios.txt","a");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    fprintf(arquivo,"\n==========\n");
    fprintf(arquivo,"Funcionários Cadastrados");
    fprintf(arquivo,"\n==========\n");

    for(int i=0; i<funcionarios;i++){
   printf("\n=== Cadastro Funcionário %d ===", i + 1);
    printf("\nDigite o nome:");
    scanf(" %49[^\n]", f.nome);

    printf("\nDigite o número da matricula:");
    scanf("%d", &f.matricula);

    fprintf(arquivo,"\nFuncionário: %s ", f.nome);
    fprintf(arquivo,"\nMatricula: %d\n ", f.matricula);
    fprintf(arquivo,"-------------------------------");
    }
    fclose(arquivo);

    printf("Arquivo guardado com sucesso!");

    return 0;
}
