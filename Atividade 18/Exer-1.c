/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int soma(int n1, int n2){
    return n1 + n2;
}
int subtrair(int n1, int n2){
    return n1 - n2;
}
int multiplicar(int n1, int n2){
    return n1 * n2;
}
int dividir(int n1, int n2){
    return n1 / n2;
}
void exibirMenu(){
printf("\n=== CALCULADORA ===\n");
printf("1 - Somar\n");
printf("2 - Subtrair\n");
printf("3 - Multiplicar\n");
printf("4 - Dividir\n");
printf("5 - Sair\n");
printf("Escolha uma opção:");
}
int main (){
    int opcao;
    int resultado;
    int n1,n2;
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        printf("Digite o primeiro número:");
        scanf("%d", &n1);
        printf("Digite o segundo número:");
        scanf("%d", &n2);
                
        switch (opcao) {
            case 1:
                resultado = soma(n1,n2);
                printf("\nResultado: %d\n ", resultado);
                break;
            case 2:
                resultado = subtrair(n1,n2);
                printf("\nResultado: %d\n", resultado);
                break;
                case 3:
                resultado = multiplicar(n1,n2);
                printf("\nResultado: %d\n", resultado);
                break;
            case 4:
                
                if(n2 == 0){
                    printf("\nErro: não pode dividir por zero!\n");
                }else{
                    resultado = dividir(n1,n2);
                    printf("\nResultado: %d\n", resultado); 
                } 
                break;
            case 5:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);
    
    printf("\n Obrigado, volte sempre!");

    return 0;
}