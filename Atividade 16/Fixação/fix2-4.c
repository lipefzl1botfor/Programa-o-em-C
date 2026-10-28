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
   int i;
   printf("Digite uma palavra: \n");
   scanf("%49s", palavra);
   for(i = 0; palavra[i] != '\0'; i++){
       printf("%c\n", palavra[i]);
   }
    return 0;
}