#include "search_algos.h"
/**
 * linear_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: the array of integers.
 * @size: the size of the array.
 * @value: the value of search.
 * Return: int.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
