/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>




void main()
{
int i,j,a[2][3],sum=0;

 
printf("enter the elements");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("matrix is\n");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d \t",a[i][j]);
        sum=sum+a[i][j];
    }
    printf("\n");
 

}

 

}
  



        



