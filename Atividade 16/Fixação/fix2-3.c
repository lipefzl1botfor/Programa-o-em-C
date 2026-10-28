/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char palavra[50];
   
   printf("Digite uma palavra: \n");
   scanf("%1s", &palavra);
   
   printf("A palavra tem \"%s\" como primeiro caractere", palavra);
    return 0;
}