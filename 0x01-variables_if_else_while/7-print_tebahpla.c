#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char chart;

	for (chart = 'z'; chart >= 'a'; chart--)
	{
		putchar(chart);
	}
	putchar('\n');

	return (0);
}
