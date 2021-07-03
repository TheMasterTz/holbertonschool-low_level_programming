#include "holberton.h"
/**
  *leet - encodes string into 1377
  *@s:char
  *Return: char*
  */

char *leet(char *s)
{
	char *c = s;
	char *m = "aeotl";
	char *M = "AEOTL";
	char *num = "43071";
	int x;

	while (*c)
	{
		x = 0;
		while (x < 5)
		{
			if (*c == *(m + x) || *c == *(M + x))
			{
				*c = *(num + x);
			}
			x++;
		}
		c++;
	}
	return (s);
}
