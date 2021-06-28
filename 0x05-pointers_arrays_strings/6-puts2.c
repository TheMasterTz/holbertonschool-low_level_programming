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

	for (x = 0; str[x], x = x + 2)
	{
		_putchar(str[x])
	}
	_putchar('\n')
}
