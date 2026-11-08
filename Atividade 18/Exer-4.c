/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

 int dobro (int v){
      return v * 2;
  }
int main()
{
    int v, v2;
 printf("Quantidade inicial: ");
 scanf("%d", &v);
 
 printf("Quantidade duplicada: %d", dobro(v));
 
    return 0;
}
