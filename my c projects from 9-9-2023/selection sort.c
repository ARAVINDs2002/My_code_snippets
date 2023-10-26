/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10],i,j,tot_arr_ele,temp;
    printf("enter the toltal number of array  :\n");
    scanf("%d",&tot_arr_ele);
    printf("enter the array elements :\n");
    for(i=1;i<=tot_arr_ele;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("performing sorting !!!!!\n");
    for(i=0;i<=tot_arr_ele;i++)
    {
        for(j=i+1;j<tot_arr_ele-1;j++)
        {
            if(arr[i]>arr[j])
            {
                
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted elements\n");
    
 for(i=1;i<=tot_arr_ele;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
