#include "holberton.h"
/**
 *cap_string- capitalize first lowercase letter after seperator
 *@s:char
 *Return: char
 */

char *cap_string(char *s)
{
	char *j = s;
	char *eva = ",;.!?\"(){} \t\n";
	int x;

	while (*j)
	{
		for (x = 0; eva[x] != '\0'; x++)
		{
			if (*j == eva[x] && *(j + 1) <= 'z')
			{
				j++;
				*j = *j - 32;
				break;
			}
		}
		j++;
	}
	return (s);
}
