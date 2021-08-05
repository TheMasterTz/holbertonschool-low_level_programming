#include "main.h"
/**
 * print_binary - prints the binary representation fo a number
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy = n;
	int count;

	while (copy)
	{
		count++;
		copy = copy >> 1;

	}
	count--;
	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			_putchar('1');

		else
			_putchar('0');

	}

