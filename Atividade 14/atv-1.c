#include <stdio.h>

int main()
{
    float nota [2] [2] ={
        {6.0,3.0},
        {3.5,2.5}
    };
 
 for(int i=0; i<2; i++){
     for(int j=0; j<2; j++){
         printf("%.1f\t", nota[i][j]);
     }
     printf("\n");
 }

    return 0;
}
