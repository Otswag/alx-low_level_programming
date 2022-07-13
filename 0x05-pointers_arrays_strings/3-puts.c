#include "main.h"

/**
 * _puts - Prints a string.
 * @str: string.
 *
 * Return: Nothing
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 1;
}
_putchar('\n');
}
