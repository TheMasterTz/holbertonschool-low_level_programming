#include "holberton.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])//hasta donde va *s
	{
		x++;
	}

	x = x - 1;

	while (x >= 0)
	{
		_putchar(s[x]);
		i--;
	}
	_putchar('\n');
}
