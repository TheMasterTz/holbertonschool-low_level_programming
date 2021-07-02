#include "holberton.h"
/**
 *_strncat- concats 2 strings using n
 *@dest: char
 *@src: char;
 *@n:int;
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int x;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	j = i;

	for (x = 0; x < n && *src; dest++, src++, i++, x++)
	{
		*dest = *src;

	}
	if (j + n >= i)
	{
		*(dest + i) = '\0';
	}

	dest = dest - i;
	return (dest);
}
