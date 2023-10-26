/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void summation()
{
    int n1,n2,sum;
printf("enter two numbers\n");
scanf("%d %d",&n1,&n2);
sum=n1+n2;
printf("sum is %d",sum);
}
void main()
{
    summation();
}