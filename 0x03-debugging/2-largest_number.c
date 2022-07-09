<<<<<<< HEAD
#include "main.h" 
  
 /** 
  * largest_number - returns the largest of 3 numbers 
  * @a: first integer 
  * @b: second integer 
  * @c: third integer 
  * Return: largest number 
  */
  
 int largest_number(int a, int b, int c) { 
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
=======
#include "main.h"
  
 /** 
  * largest_number - returns the largest of 3 numbers 
  * @a: first integer 
  * @b: second integer 
  * @c: third integer 
  * Return: largest number 
  */ 
  
 int largest_number(int a, int b, int c) 
 { 
         int largest; 
  
         if (a >= b && a >= c) 
         { 
                 largest = a; 
         } 
         else if (b >= a && b >= c) 
         { 
                 largest = b; 
         } 
         else 
         { 
                 largest = c; 
         } 
  
         return (largest); 
 }
>>>>>>> 3c951405129785a4d09e74e31ef67b1568b4e20f
