#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints a Fizz Buzz program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0));
		{
			printf("FizzBuzz");
		}
		if else (x % 3 == 0)
		{
			printf("Fizz");
		}
		if else (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");
	return (0);
}
