 #include<stdio.h>
void main()
{
    int i,n,sum=0;
  
    for(i=1;i<=5;i++)
    {
       printf("enter teh num %d :",i);
       scanf("%d",&n);
       if(n<0)
       {
           continue;
       }
       sum=sum+n;
    }
    printf("sum is%d ",sum);
    
}