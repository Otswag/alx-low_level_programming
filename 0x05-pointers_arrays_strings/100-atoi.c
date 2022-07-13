<<<<<<< HEAD
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
}

while
(*s++);
return (num *sign);
}
=======
#include "main.h" 
  
 /** 
  * _atoi - Converts a string to an integer. 
  * @s: The string to be converted. 
  * 
  * Return: The integer value of the converted string. 
  */ 

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
do
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0'); 
else if (num > 0)
break;
}
while (*s++);
return (num * sign); 
}
>>>>>>> 4132200ffb112a7b5fdad97e710fb9e78b0a4c04
