#include "holberton.h"
/**
 *_isdigit - checks for a digit
 *@c:int
 *Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	char n;
	
	for (n = '0'; n <= '9'; n++)
	{
		if (n == c)
		{
			return (1);
		}
	}
	return (0);
}
