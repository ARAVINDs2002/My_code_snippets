/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>




void main()
{
int i,sum=0,avg=0,a[5],n;
printf("how many students are there whose marks are to be entered \n");
    scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("enter the marks of student %d\n",i);
    scanf("%d",&a[i]);
     sum=sum+a[i];
    
}
avg=sum/n;
printf("sum is %d ",sum);
printf("avg is %d ",avg);
  

}
        



