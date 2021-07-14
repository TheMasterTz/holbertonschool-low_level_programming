#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, r = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	while (r < l)
	{
		if (r <= i)
			s[r] = s1[r];

		if (r >= i)
		{
			s[r] = s2[j];
			j++;
		}
		r++;
	}

	s[r] = '\0';
	return (s);
}
