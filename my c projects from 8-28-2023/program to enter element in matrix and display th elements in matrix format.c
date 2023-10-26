/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
int i,j,a[3][3];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("enter the element at [%d,%d]  ",i,j);
        scanf("%d",&a[i][j]);

    }
       
}for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
       printf("%d\t",a[i][j]);

    }
       printf("\n");
}





}
