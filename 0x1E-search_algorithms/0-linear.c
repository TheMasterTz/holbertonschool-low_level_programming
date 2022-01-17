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
	size_t i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (array[i] == value)
				return array[i];
		}
	}
	return (-1);
}
