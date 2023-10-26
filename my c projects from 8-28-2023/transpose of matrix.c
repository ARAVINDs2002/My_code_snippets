/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i,j,a[2][3];
    //enter elements//
    for(i=0;i<2;i++)
    { 
        for(j=0;j<3;j++)
        {
               printf("enter the matrix elemnts at [%d][%d]",i,j);
               scanf("%d",&a[i][j]);
        }
    }
    //printing orignl matrix //
   printf("orignal matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
                
               printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //print trnspose//
      printf("transpose matrix is\n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
                 
               printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    
}
