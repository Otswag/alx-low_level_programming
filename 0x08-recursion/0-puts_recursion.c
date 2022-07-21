#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion -  function that prints a string
 *
 * @s: string to receive
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')

	{

		_putchar('\n');

		return;

	}

	_putchar(*s);

	s++;

	_puts_recursion(s);

=======
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
>>>>>>> 8c215e34f97197968e47401f2f84463cd3bbe778
}
