#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: First index where value is located. -1 If value is not present in
 * array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (array != NULL)
		for (iter = 0 ; iter < size ; iter++)
		{
			printf("Value checked array[%ld] = [%d]\n", iter, array[iter]);
			if (array[iter] == value)
				return (iter);
		}
	return (-1);
}
