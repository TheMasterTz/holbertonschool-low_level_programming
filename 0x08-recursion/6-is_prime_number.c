#include "holberton.h"

/**
 * is_prime_number - check for prime number
 * @n:int
 * @i:int
 *
 * Return: integer value
 */
int primercheck(int n, int i);
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (primercheck(n, n - 1));
	}
	else
	{
		return (0);
	}
}

/**
 *primercheck - prime checker
 *@n:int
 *@i:int
 *Return: 1 if prime, 0 is not
 */
int primercheck(int n, int i)
{
	if (i > 1 && n % i == 0)
	{
		return (0);
	}

	else if (i > 1)
	{
		return (primercheck(n, i - 1));
	}

	else
	{
		return (1);
	}
}
