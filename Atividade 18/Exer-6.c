/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

 int calcularFatorial(int v){
      int resultado = 1;
      for(int i=1;i <= v; i++){
        resultado *=i;   
      }
      return resultado;
 }
int main()
{
    int v;
 printf("\nDigite um número de 0 a 12:");
 scanf("%d", &v);
 if(v<0){
     printf("Não pode número negativo !");
 }else{
     printf("O valor é: %d", calcularFatorial(v));
 }
    return 0;
}
