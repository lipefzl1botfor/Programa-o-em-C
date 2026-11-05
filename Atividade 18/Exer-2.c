/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int maiorPreco (int v1, int v2){
    if(v1 > v2){
        return v1;
    }else{
        return v2;
    }
}

int main()
{
    int v1,v2;
    printf("\n Digite o preço do primeiro item:\n");
    scanf("%d", &v1);
    printf("\n Digite o preço do segundo item:\n");
    scanf("%d", &v2);
   
    printf("\n O maior valor é: R$%d\n" ,maiorPreco(v1,v2)) ;
        
    return 0;
} 