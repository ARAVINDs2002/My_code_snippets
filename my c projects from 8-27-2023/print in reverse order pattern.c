/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
 int i,j,x=1;
 for(i=1;i<=6;i++)
 {
     for(j=6;j>=i;j--)
     {
         printf("%d",j);
     }
     printf("\n");
 }
}

