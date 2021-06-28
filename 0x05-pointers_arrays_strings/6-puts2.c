#include "holberton.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int x;
	char str2[500];

	for (x = 0; str[x]; x = x + 2)
	{
		str2[x] = str[x]
		_putchar(str2[x]);
	}
	_putchar('\n');
}
