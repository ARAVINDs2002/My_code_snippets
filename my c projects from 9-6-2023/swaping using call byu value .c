/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void cbv(int,int);

void main()
{int a,b;
     printf("enter the value1\n");
     scanf("%d",&a);
     printf("enter the value2\n");
     scanf("%d",&b);
     printf("valur befor swap is a=%d b=%d\n",a,b);
     cbv(a,b);
}
void cbv(int a,int b)
{int temp;
    temp=a;
    a=b;
    b=temp;
    printf("aftr swap ids \n");
    printf("a=%d,b=%d",a,b);
}
