#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char chart;
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);

	for (chart = 'a'; chart <= 'f'; chart++)
		putchar(chart);

	putchar('\n');

	return (0);
}
