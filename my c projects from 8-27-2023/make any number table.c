/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
     int i,j,sum,n;
    printf("which number table would you like to be made :");
    scanf("%d",&n);
  
   for(i=1,j=n;i<=10;i++)
   {
       sum=i*j;
       printf("%d x %d =%d\n",i,j,sum);
   }
   
   
}
