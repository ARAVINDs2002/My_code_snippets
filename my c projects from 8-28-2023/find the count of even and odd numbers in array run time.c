/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>




void main()
{
int i,odd=0,even=0,sum=0,avg=0,a[10];
printf("enter 10 integeres.....\n");
 

for(i=1;i<=10;i++)
{
    
    scanf("%d",&a[i]);
   if(a[i]%2==0)
   {
       even++;
   }
   else
   {
       odd++;
   }
   
  
    
    
}

printf("there are %d odd numbers \n",odd);
   printf("there are %d even numbers \n",even);
  


}
        



