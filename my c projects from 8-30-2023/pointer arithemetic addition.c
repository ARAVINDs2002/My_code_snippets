/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i;
   int a[5]={1,2,3,4,5};
   int *ptr1=&a[0];
   for(i=0;i<5;i++)
   {
       printf("%d\n",*ptr1);
       ptr1++;
   }
}
