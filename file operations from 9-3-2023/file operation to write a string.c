/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
   FILE * fp;
   char c[10]="aravind";
   fp=fopen("abc.txt","w");
   fputs(c,fp);
   fclose(fp);
}
