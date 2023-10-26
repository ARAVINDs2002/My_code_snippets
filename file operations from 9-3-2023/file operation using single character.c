/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
   FILE * fp;
   char c='a';
   fp=fopen("abc.txt","w");
   fputc(c,fp);
   fclose(fp);
}
