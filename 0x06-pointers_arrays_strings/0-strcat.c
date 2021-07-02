#include "holberton.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
	{
		i++;
	}

	int s = 0;

	for (s = 0; src[s]; s++)
	{
		dest[i] = src[s];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

