/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int verificarPar (int n){
    if(n %2==0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int n;
    printf("Digite o número: ");
    scanf("%d", &n);
   if(verificarPar(n)){
        printf("\n O número %d é par" ,verificarPar(n));
   }else{
       printf("\n O número %d é ímpar", verificarPar(n));
   }

        
    return 0;
} 