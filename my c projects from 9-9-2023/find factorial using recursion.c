/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int fact(int n) {
   if(n<=1)
   
  {return 1;}
   else
   {
        return n * fact(n - 1); 
    }
}

int main() {
    int n = 5;
    int factorial = fact(n);
    printf("%d\n", factorial);
    return 0;
}

