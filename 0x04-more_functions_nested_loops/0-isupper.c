#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 *@c: int
 *Return: 1 if upper, 0 other
 */

int _isupper(int c)
{
	char t;

	for (t = 'A'; t <= 'Z'; t++)
	{
		if (c == t)
		{
			return (1);
		}
	}

	return (0);
}
