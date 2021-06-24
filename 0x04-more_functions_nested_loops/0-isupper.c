#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 *@c: int
 *Return: 1 if upper, 0 other
 */

int _isupper(int c)
{
	char letra;

	for (letra = 'A'; letra <= 'Z'; letra++)
	{
		if (letra == c)
		{
			return (1);
		}
	}	
	return (0);
}
