/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main ()
{
int i,j,k;

  for ( i = 5; i >= 1; i--)
  {

    for(j=1;j<=5-i;j++)
    {
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++)
    {
        printf("*");
    }
    
  printf("\n");
}

}
