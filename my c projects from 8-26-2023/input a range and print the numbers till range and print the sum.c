

#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("enter the range =\n");
    scanf("%d",&n);
    printf("the numbers till range are :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
        
    }
    printf("\n");
    printf("the sum is %d\n",sum);
}
