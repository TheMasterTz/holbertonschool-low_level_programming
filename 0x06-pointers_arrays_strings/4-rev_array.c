#include "holberton.h"
/**
 *reverse_array - reverses array
 *@a:int
 *@n:int
 *Return: always 0
 */

void reverse_array(int *a, int n)
{
	int x;
	int temp;
	int *j = a;

	j = j + (n - 1);

	for (x = 0; x < (n / 2) ; x++, a++, j--)
	{
		temp = *j;
		*j = *a;
		*a = temp;
	}
}
