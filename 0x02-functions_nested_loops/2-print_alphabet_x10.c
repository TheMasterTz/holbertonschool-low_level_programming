#include "holberton.h"

/**
* print_alphabet_x10 - function that prints 10 times the alphabet,
* in lowercase
* Return: nothing.
*/

void print_alphabet_x10(void)
{
	int t;
	int m = 0;

	while (m < 10)
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t += 1;
		}

		_putchar(10);
		m += 1;
	}
}
