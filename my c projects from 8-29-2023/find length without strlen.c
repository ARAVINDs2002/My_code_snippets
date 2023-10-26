#include <stdio.h>
#include<string.h>

void main()
{
   char name[20],i=0,length=0;
  
   printf("enter the characters\n");
  
      scanf("%s",&name);
      while(name[i]!='\0')
      {
          length++;
          i++;
      }
     printf("the length is %d",length);
}
