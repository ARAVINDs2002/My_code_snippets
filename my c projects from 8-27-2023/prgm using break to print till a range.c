 #include<stdio.h>
void main()
{
    int i,n;
    printf("enter the num :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n<0){
            break;
        }
         
        
        printf(" %d",i);
    }
    printf(" cant include negative numbers");
}