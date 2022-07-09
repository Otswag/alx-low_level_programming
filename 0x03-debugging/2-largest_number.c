#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
<<<<<<< HEAD
	else if (a >= b && c >= a)
	{
		largest = c;
	}
	else if (b >= c)
=======
	else if (b >= a && b >= c)
>>>>>>> 0913ea5dabdf4527f34d33a40c53889ee0d9b11f
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
<<<<<<< HEAD
	
	return (largest);
=======

return (largest);
>>>>>>> 0913ea5dabdf4527f34d33a40c53889ee0d9b11f
}
