#include "search_algos.h"

/**
 * print_array - prints the array being searched every time it changes
 * @array: Pointer to a pointer to the first element of the array to search in
 * @left: First number at the left where the array starts printing
 * @right: Last number at the left where the array finishes printing
 */

void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left ; i < right ; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}


/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r;

	if (array != NULL && size > 0)
	{
		l = 0;
		r = size - 1;
		while (l < r)
		{
			print_array(array, l, r);
			m = (l + r) / 2;
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
