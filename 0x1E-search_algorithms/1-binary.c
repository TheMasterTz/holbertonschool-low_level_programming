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
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: Index where value is located. -1 If value is not present in
 * array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int m;

	if (array != NULL)
		while (L <= R)
		{
			print_array(array, L, R);
			m = (L + R) / 2;
			if (array[m] < value)
				L = m + 1;
			else if (array[m] > value)
				R = m - 1;
			else
				return (m);
		}
	return (-1);
}
