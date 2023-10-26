#include<stdio.h>
void main()
{
int i,a=0,b=1,n,c;printf("enter the number:");
scanf("%d",&n);
printf("%d %d ",a,b);
for(i=3;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
}
}

