# include<stdio.h>
void dis(int a)
{
   if(a<1)
   {
    return ;   
   }
   else
   {
       printf("%d",a);
       dis(a-1);
       printf("%d",a);
   }
}
void main()
{
    int a=3;
    dis(3);
}