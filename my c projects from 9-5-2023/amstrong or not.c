#include<stdio.h>
void main()
{
    int num,temp,sum=0,r;
    printf("enter the num :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
        
        
    }
    if(temp==sum)
    {
        printf("the number %d is an amstrong number",temp);
    }
    else
    {
    printf("the number %d is not an amstrong number",temp);
    }
}