#include "holberton.h"
/**
 *_strcat- concats 2 strings
 *@dest: char
 *@src: char;
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*(dest + 1) = '\0';
	dest = dest - i;

	return (dest);
}
