#include "holberton.h"

/**
* _islower - function that checks for lowercase character.
* @c: The input character to check
* Return: int.
*/

int _islower(int dr)
{
	if (dr >= 97 && dr <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
