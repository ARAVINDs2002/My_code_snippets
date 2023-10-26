#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char str[10],temp;int i,left,right,len;clrscr();
printf("enter the syrng");
scanf("%s",&str);
len=strlen(str);
left=0;right= len-1;
for(i=left;i<=right;i++)
{
temp=str[i];
str[i]=str[right];
str[right]=temp;
right--;
}
printf("sorted string is :\n");
printf("%s",str);
getch();
}