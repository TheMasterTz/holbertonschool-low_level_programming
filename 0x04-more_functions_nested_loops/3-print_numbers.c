#include "holberton.h"

/**
 *print_numbers - print numbers 0-9
 *
 *Return:always 0
 */
void print_numbers(void)
{
	int digito;

	for (digito = '0'; digito < 10; digito++)
	{
		_putchar(digito);
	}
	_putchar('\n');
	return (0);
}
