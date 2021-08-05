#include "main.h"
/**
 *set_bit - set the value of a bit to 1
 *@n: unsigned long int*
 *@index: unsigned int
 *Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	m = 1 << index;
	*n = *n | m;
	return (1);
}
