#include "holberton.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c]; s++)
	{
		c++;
	}
	return (c);
}
