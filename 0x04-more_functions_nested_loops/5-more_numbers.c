#include "holberton.h"
/**
 *more_numbers - prints 1-14 10x
 *
 *Return: Always 0
 */

void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			int x, y;

			x = n / 10;
			y = n % 10;

			if (x != 0)
			{
				_putchar(x + '0');
				_putchar(y + '0');
			}
		}
		_putchar('\n');
	}
}
