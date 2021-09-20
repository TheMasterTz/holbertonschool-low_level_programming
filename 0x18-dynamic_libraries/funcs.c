#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s)
{
	unsigned int len = 0;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
void _puts(char *s)
{
	ssize_t num = 0, len = 0;

	num = _strlen(s);
	for (len = 0; len < num; len++)
	{
		_putchar(s[len]);
	}
}
char *_strcpy(char *dest, char *src);
int _atoi(char *s)
{
	unsigned int i, digits;
	int num = 0, num_test;

	num_test = INT_MAX;
	for (digits = 0; num_test != 0; digits++)
		num_test /= 10;
	for (i = 0; s[i] != '\0' && i < digits; i++)
	{
		num *= 10;
		if (s[i] < '0' || s[i] > '9')
			return (-1);
		if ((i == digits - 1) && (s[i] - '0' > INT_MAX % 10))
			return (-1);
		num += s[i] - '0';
		if ((i == digits - 2) && (s[i + 1] != '\0') && (num > INT_MAX / 10))
			return (-1);
	}
	if (i > digits)
		return (-1);
	return (num);
}
char *_strcat(char *dest, char *src)
{
	char *NewString;
	unsigned int len1 = 0, len2 = 0, Newlen;
	unsigned int iter1, iter2;

	if (dest == NULL)
		len1 = 0;
	else
		for (len1 = 0; dest[len1]; len1++)
			;
	if (src == NULL)
		len2 = 0;
	else
		for (len2 = 0; src[len2]; len2++)
			;
	Newlen = len1 + len2 + 2;
	NewString = malloc(Newlen * sizeof(char));
	if (NewString == NULL)
		return (NULL);
	for (iter1 = 0; iter1 < len1; iter1++)
		NewString[iter1] = dest[iter1];
	NewString[iter1] = '/';
	for (iter2 = 0; iter2 < len2; iter2++)
		NewString[iter1 + 1 + iter2] = src[iter2];
	NewString[len1 + len2 + 1] = '\0';
	return (NewString);
}
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
