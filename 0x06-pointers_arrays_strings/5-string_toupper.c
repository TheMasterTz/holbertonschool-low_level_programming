#include "holberton.h"
/**
 *string_toupper - convert lowercase to uppercase
 *@t : char
 *Return: char *s upper
 */

char *string_toupper(char *t)
{
	char *s = t;
	char c;

	while (*s)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			if (*s == c)
			{
				*s = *s - 32;
			}
		}
		s++;
	}

	return (t);1
}
