/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{ char n[10]="aravind s";
   FILE * fp;
  
   
   fp=fopen("abc.txt","w");
   fprintf(fp,"%s",n);
   fclose(fp);
}
