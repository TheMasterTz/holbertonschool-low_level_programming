#include "holberton.h"
/**
 *_strcmp- compares stings
 *@s1: char
 *@s2: char
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (*s1 == *s2)
	{
		s1++;
		s2++;

		if (*s1 == '\0')
		{
			return (0);
		}
	}

	i = *s1 - *s2;

	return (i);
}
