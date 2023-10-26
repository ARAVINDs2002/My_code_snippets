/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
void fact(int);
void main()
{
    fact(4);
}
void fact(int n)
{
    int i=1,factorial=1;
    
    
    while(i<=n)
    {
        factorial=factorial*i;
        i=i+1;
    }
    printf("factorial of the number %d is= %d",n,factorial);
}
