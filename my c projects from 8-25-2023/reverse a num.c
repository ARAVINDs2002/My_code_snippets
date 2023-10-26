#include<stdio.h>
void main()
{
int n=12345,rem,rev=0,num;
while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    

}
printf("%d",rev);
}

