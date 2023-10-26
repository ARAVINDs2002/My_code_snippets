#include <stdio.h>
void main(){
int i,j;
  
int matrix[3][3]={
    {1,2,3},
    {4,5,6},
    {65,8,66}
};


int sum_dig1=matrix[0][0]+matrix[1][1]+matrix[2][2];
int sum_dig2=matrix[0][2]+matrix[1][1]+matrix[2][0];
printf("printing the matrix.....\n");


for(i=0;i<3;i++)
{
      for(j=0;j<3;j++)
    {
         printf("%d\t",matrix[i][j]);
    }
      printf(" ");
       printf("\n");
}
printf("the sum of diagonal 1 is %d\n",sum_dig1);
printf("the sum of diagonal 2 is %d:\n",sum_dig2);


if(sum_dig1>sum_dig2)
{
    printf("the sum of diagonal 1 is greater with sum=%d\n ",sum_dig1);
}
else if(sum_dig1<sum_dig2){
     printf("the sum of diagonal 2 is greater with sum=%d ",sum_dig2);
}
else if(sum_dig1==sum_dig2)
{
    printf("the sum of both the array diagonal is same");
}
else{printf("end");}

}

    

