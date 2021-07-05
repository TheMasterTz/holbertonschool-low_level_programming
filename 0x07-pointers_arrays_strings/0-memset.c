#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
