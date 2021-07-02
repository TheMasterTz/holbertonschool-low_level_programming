#include "holberton.h"
/**
 *@brief _strncat - Concatenates two strings
 *
 * @param dest The destination value 
 * @param src The source value
 * @param n The limit of the concatenation
 *
 * @return A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i]; i++);
    
	for(j = 0; j < n && src[j]; j++)

        {
		dest[i] = src[j];
		i++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
