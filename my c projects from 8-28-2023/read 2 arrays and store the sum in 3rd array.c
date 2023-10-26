/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>




void main()
{
int i,a1[5],a2[5],a3[5];
printf("enter elemnts of array 1.....\n");
 

for(i=1;i<=5;i++)
{
    
       scanf("%d",&a1[i]);
 
}
      printf("enter elemnts of array 2.....\n");
 

for(i=1;i<=5;i++)
{
    
    scanf("%d",&a2[i]);
 
}
for(i=1;i<=5;i++)
{
   a3[i] =a1[i]+a2[i];
   printf("elements  of array 3 at pos %d is %d\n",i,a3[i]);
   
}



  


}
        



