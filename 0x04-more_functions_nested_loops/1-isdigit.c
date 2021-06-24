#include "holberton.h"

/**
 *_isdigit - checks for a digit
 *@c:int
 *Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	int num;

	for (num = '0'; num < 10; num++)
	{
		if (num == c)
			return (1);
	}
	return (0);
}
