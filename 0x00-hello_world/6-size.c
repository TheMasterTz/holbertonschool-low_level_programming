#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_;
	int int_;
	long int longint_;
	long long int longsint_;
	float float_;

	printf("Size of a char: %i byte(s)\n", sizeof(char_));
	printf("Size of an int: %i byte(s)\n", sizeof(int_));
	printf("Size of a long int: %i byte(s)\n", sizeof(longint_));
	printf("Size of a long long int: %i byte(s)\n", sizeof(longsint_));
	printf("Size of a float: %i byte(s)\n", sizeof(float_));

	return (0);
}

