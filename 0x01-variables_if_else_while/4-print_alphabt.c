#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c5;

	for (c5 = 'a'; c5 <= 'z'; ++c5)
	{
		if (c5 != 'q' && c5 != 'e')
			putchar(c5);

	}
	putchar('\n');

	return (0);
}
