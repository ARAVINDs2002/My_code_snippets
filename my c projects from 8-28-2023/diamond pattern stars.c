/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
int i,j,space,k=1;
for(i=1;i<=5;i++)
{
    for(space=1;space<=5-i;space++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    printf("\n");
}
for(i=5-1;i>=1;i--)
{
    for(space=1;space<=5-i;space++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    printf("\n");
}
 
 
  
    
}
