#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The char to fill in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *i = malloc(size * sizeof(char));;

	if (size == 0)
	{
		return (NULL);
	}
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}

	return (i);
}
