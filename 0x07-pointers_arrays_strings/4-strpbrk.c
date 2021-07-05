#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk-searches string for set of bytes
 *@s: char
 *@accept: char
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		s++;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
