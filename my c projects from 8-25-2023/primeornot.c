/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    //prime or not//
    int p,r=0,i;
    printf("enter the number :");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        if(p%i==0)
        {
            r++;
        }
    }
    if(r==2)
    {printf("prime");}
    else{printf("notprime");}
}

