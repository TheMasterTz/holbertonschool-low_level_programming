#include "holberton.h"

/**
 * jack_bauer - function with no argument
 *
 * Description: Using for loops to print every minute in 24hr
 * Return: none
 */

void jack_bauer(void)
{
	int hora;
	int minutos;

	for (hora = 0; hora < 24; hora++)
	{
		for (minutos = 0; minutos < 60; minutos++)
		{
			_putchar(hora / 10 + '0');
			_putchar(hora % 10 + '0');

			_putchar(':');

			_putchar(minutos / 10 + '0');
			_putchar(minutos % 10 + '0');

			_putchar('\n');
		}
	}
}

