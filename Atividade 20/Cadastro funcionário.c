#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} funcionario;

float diferencasalario(float s1, float s2) {
    float d_salario;

    if (s1 > s2) {
        d_salario = s1 - s2;
        return d_salario;
    }
    else if (s1 == s2) {
        printf("Os dois funcionários recebem o mesmo salário!!!\n");
        d_salario = 0;
        return d_salario;
    }
    else {
        d_salario = s2 - s1;
        return d_salario;
    }
}

int main() {
    funcionario f, f2;

    printf("===================================\n");
    printf("CADASTRO FUNCIONÁRIOS");
    printf("\n==============================\n");

    printf("Funcionário 1\n");
    
    printf("Insira o nome: ");
    scanf(" %49s", f.nome);

    printf("Insira a idade: ");
    scanf("%d", &f.idade);

    printf("Insira o salario: ");
    scanf("%f", &f.salario);

    printf("Funcionário 2\n");
    
    printf("Insira o nome: ");
    scanf(" %49s", f2.nome);

    printf("Insira a idade: ");
    scanf("%d", &f2.idade);

    printf("Insira o salario: ");
    scanf("%f", &f2.salario);

    printf("===================================\n");
    printf("DADOS FUNCIONÁRIOS");
    printf("\n==============================\n");
    printf("Funcionário 1\n");
    printf("\nNOME: %s\n", f.nome);
    printf("IDADE: %d\n", f.idade);
    printf("SALARIO: %.2f\n", f.salario);

    printf("Funcionario 2\n");
    printf("\nNOME: %s\n", f2.nome);
    printf("IDADE: %d\n", f2.idade);
    printf("SALARIO: %.2f\n", f2.salario);

    printf("diferença salarial: %.2f\n", diferencasalario(f.salario, f2.salario));

    return 0;
}
