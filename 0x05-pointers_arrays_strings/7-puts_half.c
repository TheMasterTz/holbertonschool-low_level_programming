#include "holberton.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int x = 0, l = 0, n;

	while (str[x++])
		l++;

	if ((l % 2) == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (x = n; x < l; x++)
		_putchar(str[x]);

	_putchar('\n');
}
