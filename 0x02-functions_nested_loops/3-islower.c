#include "holberton.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: The input character to check
 * Return: int.
 */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
