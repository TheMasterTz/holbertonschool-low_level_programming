#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 *@n: int
 * Return: int
 */

int factorial(int n)
{
	int i;

	if (n > 0)
	{
		i = n * (factorial(n - 1));
		return (i);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
