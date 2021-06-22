#include "holberton.h"

/**
 * times_table - function without parameter
 *
 * Description: using for loops to create table and multiples
 * Return: result
 */

void times_table(void)
{
	int x;
	int y;
	int total;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');
		for (y = 1; y < 10; y++)
		{
			total = x * y;
			if (total < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(total + '0');
			}

			else if (total >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(total / 10 + '0');
				_putchar(total % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
