#include "holberton.h"
/**
 *_isdigit - checks for a digit
 *@c:int
 *Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	char num1;
	
	for (num1 = '0'; num1 <= '9'; num1++)
	{
		if (num1 == c)
			return (1);
	}
	return (0);
}
