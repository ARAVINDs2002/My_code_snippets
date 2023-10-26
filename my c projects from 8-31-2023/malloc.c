#include <stdio.h>
#include <stdlib.h>

 int main ()
{
  
int n;
  
 
printf ("Enter the number of integers: ");
  
scanf ("%d", &n);
  
 
 
int *ptr = (int *) malloc (n * sizeof (int));	// Dynamically allocate memory for an array of integers
  

  
 
printf ("Enter %d integers:\n", n);
  
for (int i = 0; i < n; i++)
    {
      
scanf ("%d", &ptr[i]);
    
} 
 
printf ("You entered the following integers:\n");
  
for (int i = 0; i < n; i++)
    {
      
printf ("%d ", ptr[i]);
    
} 
 
    
    free (ptr);// Free the dynamically allocated memory
  
 return 0;


}
