#include "holberton.h"

/**
 * @brief  _strncpy - Copy a string
 *
 * @param dest The destination value
 * @param src The source value
 * @param n The copy limit
 *
 * @return char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
