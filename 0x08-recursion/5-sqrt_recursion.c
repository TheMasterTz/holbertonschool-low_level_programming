#include "holberton.h"

int _sqrt(int n, int i);
/**
 *_sqrt_recursion - returns natural square root
 *@n: int
 *@i: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (_sqrt(n, 1));
	}
}

/**
 * sqrt - compare squares with numbers
 *@n:int
 *@i:int
 *Return: int
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
