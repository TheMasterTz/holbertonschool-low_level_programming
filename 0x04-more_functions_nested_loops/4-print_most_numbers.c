#include "holberton.h"
/**
 *print_most_numbers - print numbers 0-9
 *
 *Return:always 0
 */

void print_most_numbers(void)
{
	for (N = 0; N < 10; N++)
	{
		if (N != 2 && N != 4)
		{
			_putchar(N + '0')
		}
	}
	_putchar('\n')
}
