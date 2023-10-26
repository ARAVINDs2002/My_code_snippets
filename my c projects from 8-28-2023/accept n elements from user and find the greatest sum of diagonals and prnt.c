#include <stdio.h>
void main ()
{
  int i,j,a[3][3],d1sum,d2sum;
 
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
           printf("enter the elements at[%d][%d] ",i,j);
          scanf("%d",&a[i][j]);
          
      }
     d1sum=a[0][0]+a[1][1]+a[2][2];
     d2sum=a[0][2]+a[1][1]+a[2][0];
    }
printf("d1 sum is %d\n",d1sum);
printf("d2 sum is %d\n",d2sum);
if(d1sum < d2sum)
{
    printf("d2 sum with %d is greatest\n",d2sum);
}
if(d1sum > d2sum)
{
    printf("d1 sum with %d is greatest\n",d1sum);
}
else if(d1sum==d2sum)
{
    printf("both have the save sum of diagonals with d1:%d and d2 :%d\n",d1sum,d2sum);
}
printf("printing matrix elemnts.....\n");
for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
           printf("%d \t",a[i][j]);
          
          
      }
      printf("\n");



}
}
