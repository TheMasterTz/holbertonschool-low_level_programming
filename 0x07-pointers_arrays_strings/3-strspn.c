#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;
	unsigned int var1 = 0;
	unsigned int var2 = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				var2++;
				var1 = 0;

				break;
			}
			else
			{
				var1++;
				if (accept[var1] == '\0')
				{
					return (var2);
				}
			}
		}
	}
	return (var2);
}
