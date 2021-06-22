#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[] = "Holberton";
	int y;

	y = 0;

	while (y <= 8)
	{
		_putchar(x[y]);
		y++;
	}
	_putchar('\n');
	return (0);
}
