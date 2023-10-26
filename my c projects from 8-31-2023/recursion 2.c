# include<stdio.h>
int dis(int a)
{
    int s;
   if(a==1)
   {
    return ;   
   }
   
      s=a+(dis(a-1));
      
   
}
void main()
{
    int a;
    a=dis(5);
    printf("%d",a);
}