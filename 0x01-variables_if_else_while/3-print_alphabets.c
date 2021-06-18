#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c4;

	for (c4 = 'a'; c4 <= 'z'; ++c4)
		putchar(c4);

	for (c4 = 'A'; c4 <= 'Z'; ++c4)
		putchar(c4);
	putchar('\n');

	return (0);
}
