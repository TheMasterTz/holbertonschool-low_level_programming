#include "main.h"
/**
 * flip_bits - returns number of bits you would need to flip
 * @n: unsigned long int
 * @m: insigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR;
	unsigned int count = 0;

	if (m == n)
		return (0);

	for (XOR = m ^ n; XOR; XOR = XOR >> 1)
	{
		if (XOR & 1)
			count++;
	}
	return (count);
}
