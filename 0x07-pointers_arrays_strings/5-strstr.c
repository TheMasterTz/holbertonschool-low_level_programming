#include "holberton.h"
/**
 * _strstr- located a substring
 * @haystack:char
 * @needle:char
 * Return:char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, b = 0;

	while (haystack[i])
	{
		while (needle[b])
		{
			if (haystack[i + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}
	return ('\0');
}
