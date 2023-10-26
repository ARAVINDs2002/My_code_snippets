/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void
main ()
{
int i,j,x=1;

  for (int i = 1; i <= 5; i++)
  {
      for(j=1;j<=5;j++)
      {
          if((i+j)<=5)
          {
              printf(" ");
          }
          else{
              printf("*");
             
          }
          
      }
      printf("\n");
      
  }
    


}
