#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char vr;

	for (vr = 'a'; vr <= 'z'; vr++)
	{
		_putchar(vr);
	}

	_putchar('\n');
}
