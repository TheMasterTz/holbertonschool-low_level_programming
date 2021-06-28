#include "holberton.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;

	while ((str[x]) || (x <= 225))
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}

		x++;
	}
	_putchar('\n');
}
