/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sum(int*a,int*b);
void main()
{int a,b;
    a=1;
    b=4;
    sum(&a,&b); 
    printf("%d,%d\n",a,b);
    
    
}
void sum(int*a,int*b)
{
*b=4;
*a=1;
    printf("%d,%d\n",*a,*b);
}