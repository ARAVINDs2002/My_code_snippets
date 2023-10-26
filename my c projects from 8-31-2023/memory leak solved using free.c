#include <stdio.h>
#include <stdlib.h>

int main() {
   int opt=1,*ptr;
   while(opt<100)
   {
       printf("memory leak!!!!\n");
       ptr=(int *)malloc(50000*sizeof(int));
       printf("press Y to continue\n");
       scanf("%d",&opt);
       free(ptr);
   }
}
   /*now its safe...so when you run this code 
   the iterations will be of 50000 times but using
   the free() the memory is
   deallocated in the folloging iterations*/
