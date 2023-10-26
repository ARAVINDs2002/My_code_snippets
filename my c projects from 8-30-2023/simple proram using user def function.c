/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
void insert()
{ int i=1,n,fact=1;
    printf("enter the number");
    scanf("%d",&n);

while(i<=n)
    {
        fact=fact*i;
        i++;
         
    }
    printf("fact is%d ",fact);
   
}
void main()
{
    insert();
 
}
